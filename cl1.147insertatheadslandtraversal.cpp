//Insertion at head of a singly linkedlist and traversal
#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node(int data)   //Creation of every node
	{
		this->data=data;
		this->next=NULL;
	}
	
};
void print(Node* &head)    //traversal code
{
	Node* temp= head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertAtHead(Node* &head, int data)
{
	Node* temp= new Node(data); //Naya node ban gya
	temp->next=head;
	head=temp;
}


int main()
{
	/*Node *head= new Node(10);
	print(head);
	insertAtHead(head,20);
	print(head);
	insertAtHead(head,30);
	print(head);
	insertAtHead(head,40);
	print(head);
	return 0;
	*/
	//User input
	int n,data;
	cout<<"Enter how many nodes you want to enter:";
	cin>>n;
	cout<<endl;
	cout<<"Enter the data of the first node:";
	cin>>data;
	cout<<endl;
	Node *head= new Node(data);
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<" th node:";
			cin>>data;
			cout<<endl;
			insertAtHead(head,data);
		}
	}
	cout<<endl;
	print(head);
	return 0;
}

