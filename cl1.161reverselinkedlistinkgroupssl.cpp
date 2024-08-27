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
int getlength(Node *temp)
{
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

Node * kreverse(Node* head,int k)
{
	if(head==NULL)		//Empty list
	{
		return head;
	}
	Node* prev=NULL;
	Node* forward=NULL;
	Node* current=head;
	int count=0;
	while(current!=NULL &&	count<k)
	{
		forward=current->next;
		current->next=prev;
		prev=current;
		current=forward;
		count++;
	}
	if(forward!=NULL)
	{
		if(getlength(forward)>=k)
		{
			head->next=kreverse(head,k);
		}
		else
		{
			head->next=forward;
		}
	}
	return prev;
}	
Node* findtail(Node* tail)
{
	if(tail==NULL)
		return tail;
	
	while(tail->next!=NULL)	
	{	
		tail=tail->next;	
	}
	return tail;	
}	
	
	

int main()
{
	int n,data,k;
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
	cout<<"\nEnter the value of k:";
	cin>>k;
	cout<<endl;
	print(head);
	
	head= kreverse(head,k);
	tail=findtail(head);
	print(head);
	cout<<"The data in the head "<<head->data<<endl;
	cout<<"The data in the tail "<<tail->data<<endl;
	
	return 0;
}
