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
Node* sort012(Node* head)
{
	if(head==NULL)	//Empty list
		return NULL;
	Node* temp=head;
	int zerocount=0,onecount=0,twocount=0;
	while(temp!=NULL)
	{
		if(temp->data==0)
			zerocount++;
		else if(temp->data==1)
			onecount++;
		else if(temp->data==2)
			twocount++;
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(zerocount!=0)
		{
			zerocount--;
			temp->data=0;
		}
		else if(onecount!=0)
		{
			onecount--;
			temp->data=1;
		}
		else if(twocount!=0)
		{
			twocount--;
			temp->data=2;
		}
		temp=temp->next;
	}
	return head;

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
	head=sort012(head);
	print(head);
	return 0;
}
