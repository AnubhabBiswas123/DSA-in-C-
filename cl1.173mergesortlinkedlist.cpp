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
Node* findmid(Node* head)
{
	Node* slow=head;
	Node* fast=head->next;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}	
Node* merge(Node* left, Node* right)
{
	if(left==NULL)
	{
		return right;
	}
	if(right==NULL)
	{
		return left;
	}
	Node* ans= new Node(-1);
	Node* temp=ans;
	while(left!=NULL && right!=NULL)
	{
		if(left->data < right->data)
		{
			temp->next=left;
			temp=left;
			left=left->next;
		} 
		else
		{
			temp->next=right;
			temp=right;
			right=right->next;	
		}
	}
	while(left!=NULL)
	{
		temp->next=left;
		temp=left;
		left=left->next;
	}
	while(right!=NULL)
	{
		temp->next=right;
		temp=right;
		right=right->next;
	}
	ans=ans->next;
	return ans;
}
	
Node* mergeSort(Node* head)
{
	if(head==NULL || head->next==NULL)	//Base Case
	{
		return head;
	}
	Node* mid= findmid(head);
	Node* left=head;
	Node* right=mid->next;
	mid->next=NULL;
	left=mergeSort(left);
	right=mergeSort(right);
	Node* ans=merge(left,right);
	return ans;
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
			insertattail(head,tail,data);
		}
	}
	print(head);
	cout<<endl;
	Node* ans=mergeSort(head);
	print(ans);
	cout<<endl;
}
