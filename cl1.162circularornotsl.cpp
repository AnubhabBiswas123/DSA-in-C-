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
void insertattail(Node *&tail,int data)
{
	Node* temp=new Node(data);
	
	//Empty list
	if(tail==NULL)
	{
		temp->next=temp;
		tail=temp;
	}
	temp->next=tail->next;
	tail->next=temp;
	tail=temp;
}
void print(Node* &tail)
{
	if(tail==NULL)		//Empty list
	{
		cout<<"This is a empty list"<<endl;
		return;
	}
	Node* temp=tail;	
	do
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=tail);
	cout<<endl;
}



/*void print(Node* &head)
{
	Node* temp=head;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}*/
/*void insertattail(Node* &tail,int data)
{
	Node* temp= new Node(data);	
	tail->next=temp;
	tail=temp;
}*/
bool findcircular(Node* tail)
{
	if(tail==NULL)
	{
		cout<<"Empty list"<<endl;
		return 1;
	}
	Node* temp=tail->next;
	while(temp!=NULL && temp!=tail)
	{
		temp=temp->next;
	}
	if(temp==NULL)
		return 0;
	return 1;
}
	
int main()
{
	int n,data;
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the tail node:";
	cin>>data;
	Node* tail=NULL;
	insertattail(tail,data);
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
	print(tail);
	cout<<"The data in the tail "<<tail->data<<endl;
	if(findcircular(tail))
	{
		cout<<"This is a circular linked list"<<endl;
	}
	else
	{
		cout<<"This is not a circular linked list"<<endl;
	}	
	return 0;
}
