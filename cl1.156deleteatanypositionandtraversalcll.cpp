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
	~Node()
	{
		int value= this->data;
		if(this->next!=NULL)
		{
			delete next;
			next= NULL;
		}
		cout<<"Node deleted having data:"<<value<<endl;
	}
};
void insertatanyposition(Node* &tail,int element,int data)
{
	if(tail== NULL) //this means the list is empty
	{
		Node *temp= new Node(data);
		tail=temp;
		temp->next=temp;
		return;
	}
	//This means that the list is not empty
	Node* current= tail;
	while(current->data!=element)
	{
		current=current->next;
	}
	//current uske sahi jagah par pohoch gya hai
	Node *newnode = new Node(data);
	newnode->next=current->next;
	current->next= newnode;
}
void print(Node* tail)
{
	Node *temp= tail;		
	if(temp==NULL)
	{
		cout<<"This is a empty list"<<endl;
		return;
	}
	else
	{
	
	do
	{
		cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail!=temp);
	cout<<endl;
	}
}
void deleteatanyposition(Node *&tail, int data)
{
	if(tail==NULL)
	{
		cout<<"This is a empty list"<<endl;
		return;
	}
	else
	{
		Node* prev= tail;
		Node* current= prev->next;
		while(current->data!=data)
		{
			prev=current;
			current=current->next;
		}
		prev->next=current->next;
		 //1 Node Linked List
        	if(current == prev) {
            		tail = NULL;
        	}

        	//>=2 Node linked list
        	else if(tail == current ) {
            		tail = prev;
        	}
        
		current->next=NULL;
		delete current;
		
	}
	
}	
int main()
{
	Node *tail=NULL;
	insertatanyposition(tail,9,9);
	print(tail);
	insertatanyposition(tail,9,5);
	print(tail);
	deleteatanyposition(tail,9);
	print(tail);
	insertatanyposition(tail,5,7);
	print(tail);
	insertatanyposition(tail,7,6);
	print(tail);
	insertatanyposition(tail,6,3);
	print(tail);
		
	return 0;
}
