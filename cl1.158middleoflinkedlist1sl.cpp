#include <iostream>
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
void print(Node *&head)
{
	Node* temp=head;
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
Node* middle(Node* &head)
{
	int len=0;
	Node* temp=head;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	int n=len/2;
	int count=0;
	temp=head;
	while(count<n)
	{
		temp=temp->next;
		count++;
	}
	return temp;
}	
int main()
{
	int n,data;
	cout<<"Enter the number of nodes you want to insert:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node *head= new Node(data);
	Node *tail= head;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<" th node:";
			cin>>data;
			cout<<endl;
			insertattail(tail,data);
		}
	}
	print(head);
	Node *ans= middle(head);
	cout<<"The middle node of the list is:"<<ans->data<<endl;
	return 0;
}
