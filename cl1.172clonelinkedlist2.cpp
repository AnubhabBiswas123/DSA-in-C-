#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node* random;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
		this->random=NULL;
	}
};
  void insertatTail(Node*& head, Node*& tail, int data)
{
    Node* temp= new Node(data);
    if(head==NULL){         //Empty list
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

void print(Node* &head)
{
	Node* temp=head;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
}


  
  
    Node *copyList(Node *head) {
        // Write your code here
       Node* cloneHead=NULL;
       Node* cloneTail=NULL;
       Node* originalHead=head;
       while(originalHead !=NULL){       //List ko clone kardiya
           insertatTail(cloneHead,cloneTail,originalHead->data);
           originalHead=originalHead->next;
       }
       originalHead=head;
       Node* clone=cloneHead;
       //System hi change kardiye
       Node* forward=NULL;
       while(originalHead!=NULL && clone!=NULL)
       {
           forward=originalHead->next;
           originalHead->next=clone;
           originalHead=forward;
           forward=clone->next;
           clone->next=originalHead;
           clone=forward;
       }
       originalHead=head;
       clone=cloneHead;
       //Random pointers ko exchange karo
       while(originalHead!=NULL)
       {
           if(originalHead->next!=NULL){
           originalHead->next->random=originalHead->random ? originalHead->random->next : originalHead->random;
                  
           }
           originalHead=originalHead->next;
       }
       //List ko revert kardo
       originalHead=head;
       clone=cloneHead;
       while(originalHead!=NULL && clone!=NULL)
       {
           originalHead->next=clone->next;
           originalHead=originalHead->next;
           if(originalHead!=NULL)
           {
           clone->next=originalHead->next;
          
           }
            clone=clone->next;
        }
       return cloneHead;
    }
    
    
