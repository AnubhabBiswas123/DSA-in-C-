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
	Node *temp= new Node(data);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;	
}
void reverse(Node* &head) {
    Node* current = head;
    Node* previ = NULL;	
    Node* forward = NULL;
    
    while (current != NULL) {
        forward = current->next;  // Save the next node
        
        // Reverse the pointers
        current->next = previ;
        current->prev = forward;
        
        // Move to the next node in the original list
        previ = current;
        current = forward;
    }
    
    head = previ;  // Set the new head of the reversed list
}



int main()
{
	int n,data;
	cout<<"Enter the no. of nodes you want to create:";
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
	reverse(head);
	print(head);
	return 0;
}
