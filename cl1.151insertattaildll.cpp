#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node* prev;
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
}
void insertAtTail(Node* &tail, int data)
{
	Node* temp= new Node(data);
	tail->next=temp;
	temp->prev=tail;	
	tail=temp;
}

int main()
{
	cout<<"Enter the no. of nodes you want to create:";
	int n,data;
	cin>>n;
	cout<<endl;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node *head= new Node(data);
	Node* tail=head;
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
	cout<<"\nThe data in the head:"<<head->data<<endl;
	cout<<"The data in the tail:"<<tail->data<<endl;
	return 0;
}
