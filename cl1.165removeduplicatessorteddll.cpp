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
void insertattail(Node* &tail,int data)
{
	Node* temp= new Node(data);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}
Node* removeduplicates(Node* &head)
{
	if(head==NULL)		//Empty list
		return NULL;
	
	Node* current=head;
	while(current!=NULL)
	{
		if((current->next!=NULL) && (current->data == current->next->data))
		{
			Node* next_next=current->next->next;
			Node* NodeToDelete= current->next;
			delete(NodeToDelete);			
			current->next=next_next;
			if(next_next!=NULL)
				next_next->prev=current;
		}
		else
		{
			current=current->next;
		}
	}
	return head;
}



int main()
{
	int n,data;	
	cout<<"Enter the no. of nodes:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node* head= new Node(data);
	Node* tail=head;
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
		head=removeduplicates(head);
		print(head);
		return 0;
}	
					
		
		
		
		
		
		
		
		
