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
void insertAtTail(Node* &tail, int data)
{
	Node *temp= new Node(data);
	tail->next=temp;
	tail=temp;
}
void deleteatanyposition(Node *& head, Node *&tail,int posi)
{
	if(posi==1)				//delete at first position done
	{
		Node *temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
		return;
	}
	Node *current=head;
	Node *prev=NULL;
	int countpos=1;
	while(countpos<posi)
	{
		countpos++;
		prev=current;
		current=current->next;
	}
	if(current->next==NULL)			//delete at last node
	{
		prev->next=NULL;
		tail= prev;
		delete current;
		return;
	}
	prev->next=current->next;
	current->next=NULL;
	delete current;
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
	cout<<"The data at the head node:"<<head->data<<endl;
	cout<<"The data at the tail node:"<<tail->data<<endl;
	return 0;
}
		
		
		
