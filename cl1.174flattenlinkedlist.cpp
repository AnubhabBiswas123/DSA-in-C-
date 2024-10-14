#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node* child;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
		this->child=NULL;
	}
};

void insertattail(Node* &head,Node* &tail,int data)
{
	Node *temp= new Node(data);
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else{
	tail->next=temp;
	tail=temp;
}}
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
Node* merge(Node* left, Node* right)
{
	if(left==NULL)
		return right;
	if(right==NULL)
		return left;
	Node* ans= new Node(-1);
	Node* temp=ans;
	while(left!=NULL && right!=NULL)
	{
		if(left->data < right->data)
		{
			temp->child=left;
			temp=left;
			left=left->child;
		}
		else
		{
			temp->child=right;
			temp=right;
			right=right->child;
		}
	}
	while(left!=NULL)
	{
		temp->child=left;
		temp=left;
		left=left->child;
	}
	while(right!=NULL)
	{
		temp->child=right;
		temp=right;
		right=right->child;
	}
	ans=ans->child;
	return ans;
} 

void printflattenlist(Node *head)
{
	Node* temp= head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->child;
	}
}

Node* flattenlist(Node* head)
{
	if(head==NULL || head->next==NULL) 		//Base Case	
	{
		return head;
	}
	Node* down=head;
	Node* right=flattenlist(head->next);
	Node* ans= merge(down,right);
	return ans;
}
void insertatchild(Node* &head,Node* &tailchild,int data)
{
	Node* temp= new Node(data);
	tailchild->child= temp;
	tailchild=temp;
}
int main()
{
	int n,child,data;
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
	Node* tailchild=head;
	cout<<"Enter the no. of child nodes in the head:";
	cin>>child;
	cout<<endl;
	for(int i=1;i<child+1;i++)
	{
		cout<<"Enter the data of the "<<i<<"th child node:";
		cin>>data;
		insertatchild(head,tailchild,data);
		cout<<endl;
	}
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<"th head node:";
			cin>>data;
			insertattail(head,tail,data);
			cout<<"Enter the no. of child nodes in the head:";
			cin>>child;
			Node* headchild=tail;
			tailchild=tail;
			for(int i=1;i<child+1;i++)
			{
				cout<<"Enter the data of the "<<i<<"th child node:";
				cin>>data;
				insertatchild(headchild,tailchild,data);
				cout<<endl;
			}
		}
	
	}	
	print(head);
	cout<<endl;
	Node* ans= flattenlist(head);
	printflattenlist(ans);
	return 0;
}
