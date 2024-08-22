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
	~Node()
	{
		int val= this->data;
		if(next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"\nWe have deleted node with data:"<<val<<endl;
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
void deleteathead(Node* &head)
{
	Node* temp= head;
	head=temp->next;
	temp->next->prev=NULL;
	temp->next=NULL;
	delete temp;
}


void deleteatanyposition(Node* &head,Node *&tail, int posi)
{
	if(posi==1)
	{
		deleteathead(head);
		return;
	}
	int countposi=1;
	Node *fast= head;
	Node *slow= NULL;
	while(countposi<posi)
	{
		slow=fast;
		fast=fast->next;
		countposi++;
	}
	if(fast->next==NULL)		//delete at tail
	{
		slow->next=NULL;
		fast->prev=NULL;
		tail=slow;
		delete fast;
		return;
	}
	slow->next=fast->next;
	fast->next->prev= slow;
	fast->next=NULL;
	fast->prev=NULL;
	delete fast;
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
	cout<<"Enter the position where you want to delete:";
	cin>>posi;
	cout<<endl;
	deleteatanyposition(head,tail,posi);
	print(head);
	cout<<"\nThe data in the head node:"<<head->data<<endl;
	cout<<"The data in the tail node:"<<tail->data<<endl;
	return 0;
}
		
		
		




