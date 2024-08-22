#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* prev;
	Node* next;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};
void print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertAtTail(Node* &tail, int data)
{
	Node *temp= new Node(data);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}
void insertAtHead(Node* &head, int data)
{
	Node *temp= new Node(data);
	temp->next=head;
	head->prev=temp;
	head=temp;
}	
void insertAtanyposition(Node* &head,Node *&tail,int posi,int data)
{
	if(posi==1)
	{
		insertAtHead(head,data);
		return;
	}
	int countpos=1;
	Node* temp= head;
	while(countpos<posi-1)
	{
		temp=temp->next;
		countpos++;
	}
	if(temp->next==NULL)
	{
		insertAtTail(temp,data);
		return;
	}
	Node* NewNode = new Node(data);
	NewNode->next=temp->next;
	temp->next->prev=NewNode;
	temp->next=NewNode;
	NewNode->prev=temp;
}
	
	
	
	
	
		
	





int main()
{
	int n,data,posi;
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node *head= new Node(data);
	Node *tail=head;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<" th node:";
			cin>>data;
			cout<<endl;
			insertAtTail(tail,data);
		}
	}
	print(head);
	cout<<"\nEnter the position where you want to enter the next node:";
	cin>>posi;
	cout<<endl;
	cout<<"Enter the data of the new node:";
	cin>>data;
	cout<<endl;
	insertAtanyposition(head,tail,posi,data);
	print(head);
	return 0;
}
