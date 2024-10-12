#include <iostream>
#include <vector>
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

void insertattail(Node*& head,Node*& tail, int digit)
{
    Node *temp= new Node(digit);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void print(Node* head)
{
	Node* temp=head;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
}


Node* reverse(Node* head)
{
    Node* current=head;
    Node* prev=NULL;
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

Node* add(Node* first, Node* second)
{
    int carry=0;
    int sum,digit;
    Node* head=NULL;
    Node* tail=NULL;
    while(first!=NULL && second!=NULL)
    {
        sum=carry+first->data+second->data;
        digit=sum%10;
        insertattail(head,tail,digit);
        carry=sum/10;
        first=first->next;
        second=second->next;
        
    }
     while(first!=NULL)
    {
        sum=carry+first->data;
        digit=sum%10;
        insertattail(head,tail,digit);
        carry=sum/10;
        first=first->next;
    }
     while(second!=NULL)
    {
        sum=carry+second->data;
        digit=sum%10;
        insertattail(head,tail,digit);
        carry=sum/10;
        second=second->next;
    }
     while(carry!=0)
    {
        sum=carry;
        digit=sum%10;
        insertattail(head,tail,digit);
        carry=sum/10;
    }
    return head;
}
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1=reverse(num1);
        num2=reverse(num2);
        Node* ans= add(num1,num2);
        ans=reverse(ans);
        return ans;
        
    }
int main()
{
	int n,data;
	cout<<"Enter the no. of nodes you want to create of the first list:";
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
			insertattail(head,tail,data);
		}
	}
	print(head);
	cout<<endl;
	cout<<"Enter the no. of nodes you want to create of the second list:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node* head2= new Node(data);
	Node* tail2= head2;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<"th node:";
			cin>>data;
			cout<<endl;
			insertattail(head2,tail2,data);
		}
	}
	print(head2);
	cout<<endl;
	Node* ans=addTwoLists(head,head2);
	print(ans);
	return 0;
}
