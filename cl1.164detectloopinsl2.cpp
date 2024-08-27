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
void removeloop(Node* temp)
{
	if(temp==NULL)
		return;
	
	
	Node* temp1=temp;
	while(temp1->next!=temp)
	{
		temp1=temp1->next;
	}
	temp1->next=NULL;
}


Node* getstarting(Node* head,Node* fast)
{
	Node* slow=head;
	Node* temp=fast;
	while(slow!=temp)
	{
		slow=slow->next;
		fast=fast->next;
		if(slow==fast)
			return slow;
	}
	return slow;
}


bool detectloop(Node* &head)
{ 
	if(head==NULL)		//Empty list
	{
		return head;
	}
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL)
	{
		fast=fast->next;
		if(fast!=NULL)
		{
			fast=fast->next;
		}
		slow=slow->next;
		if(slow!=NULL)
		{	
		if(fast==slow)
		{
			Node* temp=getstarting(head,fast);
			removeloop(temp);
			cout<<"The starting node of the list is:"<<temp->data<<endl;
			return true;
		}}
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
		print(head);
	}
	else
	{
		cout<<"Loop is not present"<<endl;
	}
	if(detectloop(head))
	{
		cout<<"Loop is present"<<endl;
		print(head);
	}
	else
	{
		cout<<"Loop is not present"<<endl;
	}		
	return 0;
}
