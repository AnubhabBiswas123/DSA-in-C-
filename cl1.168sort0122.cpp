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
void insertattail2(Node* &tail,Node* temp)
{
	tail->next=temp;	
	tail=temp;
}
Node* sort012(Node* head)
{
	if(head==NULL)	//Empty list
		return NULL;
	Node *zerohead= new Node(-1);
	Node* zerotail=zerohead;
	Node *onehead= new Node(-1);
	Node* onetail=onehead;
	Node *twohead= new Node(-1);
	Node* twotail=twohead;
	Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==0)
		{
			insertattail2(zerotail,temp);
		}
		else if(temp->data==1)
		{
			insertattail2(onetail,temp);
		}
		else if(temp->data==2)
		{
			insertattail2(twotail,temp);
		}
		temp=temp->next;
	}
	if(onehead->next!=NULL)
	{
		zerotail->next=onehead->next;
	}
	else
	{
		zerotail->next=twohead->next;
	}
	onetail->next=twohead->next;
	twotail->next=NULL;
	head=zerohead->next;
	delete zerohead;
	delete onehead;
	delete twohead;
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
