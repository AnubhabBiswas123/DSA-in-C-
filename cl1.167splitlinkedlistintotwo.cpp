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
void insertattail(Node* &tail,int data)
{
	Node* temp= new Node(data);
	tail->next=temp;	
	tail=temp;
}
int getlength(Node* head)
{
	Node* temp=head;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
void printi(Node* head)
{
	if(head==NULL)
		return;
	Node* temp=head;
	do
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);	
	cout<<endl;
}	
	
		
void splitintotwo(Node* head)
{
	if(head==NULL)	//Empty list
		return;
	if(head->next==NULL) //For Single node
	{
		Node* temp=head;
		temp->next=head;
		printi(head);
		return;
	}
	int count=getlength(head);
	if(count%2==0)
		count=count/2;
	else
		count=count/2+1;
	Node* head1=head;
	Node* temp=head;
	int c=0;
	while(c<count-1 && temp->next!=NULL)
	{
		c++;
		temp=temp->next;
	}
	Node* head2=temp->next;
	temp->next=head1;
	printi(head1);
	temp=head2;
	c=0;
	while(c<count-1 && temp->next!=NULL)
	{
		c++;
		temp=temp->next;
	}
	temp->next=head2;
	printi(head2);
}






int main()
{
	int n,data;
	cout<<"Enter the number of nodes you want to create:";
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
	splitintotwo(head);
	return 0;
}
