#include <iostream>
#include <map>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
void insertattail(node* &head, node* &tail,int temp)
{
	if(head==NULL)
	{
		head= new node(temp);
		tail=head;
		return;
	}
	node* res= new node(temp);
	tail->next=res;
	tail=res;
}
bool checkCircular(node* head)
{
	map<node*,bool> visited;
	if(head==NULL)
		return 1;
	node* temp=head;
	while(temp!=NULL)
	{
		if(visited[temp])
		{
			return head==temp;
		}
		visited[temp]=true;
		temp=temp->next;
	}
	return false;
}	
void insertattailc(node* &head, int t)
{
	if(head==NULL)
	{
		head=new node(t);
		head->next=head;
		return;
	}
	node* temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;		
	}
	node* res=new node(t);
	temp->next=res;
	temp=res;
	temp->next=head;
}
	
		
int main()
{
	int n,temp;
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	node* head=NULL;
	node* tail=NULL;
	cout<<"Enter the data:";
	//normal linked list
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		insertattail(head,tail,temp);
	}
	if(checkCircular(head))
	{
		cout<<"This is a circular linked list"<<endl;
	}
	else
		cout<<"This is not a circular linked list"<<endl;
	
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	//Circular linked list insertion
	head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		insertattailc(head,temp);
	}
	if(checkCircular(head))
	{
		cout<<"This is a circular linked list"<<endl;
	}
	else
		cout<<"This is not a circular linked list"<<endl;
	return 0;
}
