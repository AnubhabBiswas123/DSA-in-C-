#include <iostream>
#include <map>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};


void print(Node* &head)
{
	Node* temp=head;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertattail(Node* &tail,int data)
{
	Node* temp= new Node(data);	
	tail->next=temp;
	tail=temp;
}
bool detectloop(Node* &head)
{
	Node *temp=head;
	if(head==NULL)		//Empty list
	{
		return head;
	}
	map<Node*,bool> visited;
	while(temp!=NULL)
	{
		if(visited[temp]==true)
		{
			cout<<"The loop starts at "<<temp->data<<endl;
			return true;			
		}
		visited[temp]=true;
		temp=temp->next;
	}
	return false;
}
int main()
{
	int n,data;
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	Node* head= new Node(data);
	Node* tail=head;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"\nEnter the data of the "<<i<<" th node:";
			cin>>data;
			insertattail(tail,data);
		}
	}
	cout<<endl;
	print(head);
	cout<<"The data in the tail "<<tail->data<<endl;
	tail->next=head->next->next;
	if(detectloop(head))
	{
		cout<<"Loop is present"<<endl;
	}
	else
	{
		cout<<"Loop is not present"<<endl;
	}	
	return 0;
}
