#include <iostream>
#include <map>
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

void insertattail(node* &head, node* &tail, int temp)
{
	if(head==NULL)
	{
		head= new node(temp);
		tail=head;
		return;
	}
	node* t= new node(temp);
	tail->next=t;
	tail=t;
}
void removeduplicates(node* &head)
{
	if(head==NULL)
		return;
	node* prev=NULL;
	node* curr=head;
	map<int,bool> visited;
	while(curr!=NULL)
	{
		if(visited[curr->data])
		{
			node* temp=curr;
			prev->next=curr->next;
			temp->next=NULL;
			delete temp;
			curr=prev->next;
		}
		else
		{
			visited[curr->data]=true;
			prev=curr;
			curr=curr->next;
		}
	}
}

void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}


int main()
{
	int n,temp;
	cout<<"Enter the number of nodes you want to create:";
	cin>>n;
	cout<<endl;
	node* head=NULL;
	node* tail=NULL;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data:";
		cin>>temp;
		cout<<endl;
		insertattail(head,tail,temp);
	}
	removeduplicates(head);
	print(head);
	return 0;
}
