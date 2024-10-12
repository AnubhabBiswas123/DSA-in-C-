#include <iostream>
#include <unordered_map>
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


void insertattail(Node*& head, Node*& tail, int data)
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
    Node *copyList(Node *head) {
        // Write your code here
        Node* oldHead= head;
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        int digit;
        while(oldHead!=NULL)        //Normal next pointer se clone hogya
        {
            insertattail(cloneHead,cloneTail,oldHead->data);
            oldHead=oldHead->next;
        }
        unordered_map<Node*,Node*> oldToNewNode;
        oldHead=head;
        Node* clone=cloneHead;
        while(oldHead!=NULL)        //Mapping hogya
        {
            oldToNewNode[oldHead]=clone;
            oldHead=oldHead->next;
            clone=clone->next;
        }
        oldHead=head;
        clone=cloneHead;
        while(oldHead!=NULL)        //random pointers ko allocate kar rha hoon
        {
            clone->random=oldToNewNode[oldHead->random];
            oldHead=oldHead->next;
            clone=clone->next;
        }
        return cloneHead;
        
    }

