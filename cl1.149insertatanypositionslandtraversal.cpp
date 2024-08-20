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
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertAtHead(Node *&head, int data)
{
	Node *temp= new Node(data);
	temp->next=head;
	head=temp;
}
void insertAtTail(Node* &tail, int data)
{
	Node *temp= new Node(data);
	tail->next=temp;
	tail=temp;
}
void insertAtanyposition(Node* &head,Node *&tail,int posi,int data)
{
	
	if(posi==1)				//Insert at beginning
	{
		insertAtHead(head,data);
		return;	
	}
	int countposi=1;
	Node* temp= head;
	while(countposi<posi-1)
	{
		temp=temp->next;     //temp previous element par pohoch gya hai
		countposi++;
	}
	if(temp->next==NULL)			//Insert at end
	{
		insertAtTail(tail,data);
		return;
	}
	Node *NewNode= new Node(data);
	NewNode->next= temp->next;
	temp->next=NewNode;
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
	cout<<"Enter the position of the new node:";
	cin>>posi;
	cout<<endl;
	cout<<"Enter the data of the new node:";
	cin>>data;
	cout<<endl;
	insertAtanyposition(head,tail,posi,data);
	print(head);
	cout<<"The data in the head:"<<head->data<<endl;
	cout<<"The data in the tail:"<<tail->data<<endl;
	return 0;
}
		
		
		
