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
	cout<<endl;
}
void insertAtHead(Node* &head, int data)
{
	Node* temp= new Node(data);
	temp->next=head;
	head->prev=temp;
	head=temp;
}
int main()
{
	int n,data;
	cout<<"Enter the no. of nodes you want to insert:";
	cin>>n;
	cout<<endl;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node * head= new Node(data);
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<" th node:";
			cin>>data;
			insertAtHead(head,data);
		}
	}
	print(head);
	return 0;
}
