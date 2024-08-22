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
		cout<<"This list is empty"<<endl;
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



int main()
{
	Node *tail=NULL;
	insertatanyposition(tail,9,9);
	print(tail);
	insertatanyposition(tail,9,3);
	print(tail);
	insertatanyposition(tail,3,5);
	print(tail);
	insertatanyposition(tail,5,7);
	print(tail);
	insertatanyposition(tail,9,6);
	print(tail);
	insertatanyposition(tail,5,3);
	print(tail);
	
	return 0;
}
