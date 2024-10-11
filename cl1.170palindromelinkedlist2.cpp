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

void insertattail(Node* &tail,int data)
{
	Node *temp= new Node(data);
	tail->next=temp;
	tail=temp;
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


Node* findMiddle(Node* head)
{
    Node* slow= head;
    Node* fast= head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* reverse(Node *head)
{
    Node* current= head;
    Node* prev= NULL;
    Node* forward=NULL;
    while(current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;
}
  bool isPalindrome(Node* head)
  {
      Node* middle= findMiddle(head);
      Node* temp=middle->next;
      middle->next= reverse(temp);
      Node* head1= head;
      Node* head2= middle->next;
      while(head2!=NULL)
      {
          if(head1->data!=head2->data)
          {
              return 0;
          }
          head1=head1->next;
          head2=head2->next;
      }
      middle->next= reverse(temp);
      return 1;
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
	Node* tail= head;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<"th node:";
			cin>>data;
			cout<<endl;
			insertattail(tail,data);
		}
	}
	print(head);
	cout<<endl;
	if(isPalindrome(head))
	{
		cout<<"This is a palindrome linked list"<<endl;
	}
	else
	{
		cout<<"This is not a palindrome linked list"<<endl;
	}
	return 0;
}


