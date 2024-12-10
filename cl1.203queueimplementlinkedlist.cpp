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
class queue1
{
	public:
	Node* front;
	Node* rear;
	queue1()
	{
		front=NULL;
		rear=NULL;
	}
	void push(int data)
	{
		Node* temp= new Node(data);
		if(front==NULL)
		{
			front=temp;
			rear=temp;
		}
		else
		{
			rear->next=temp;
			rear=temp;
		}
	}
	void pop()
	{
		if(front==NULL)
			cout<<"Queue is empty"<<endl;
		else
		{
			Node* temp=front;
			front=front->next;
			temp->next=NULL;
			cout<<"The popped element: "<<temp->data<<endl;
			delete temp;
		}
	}
};
int main()
{
	int n,temp;
	cout<<"Enter the number of elements you want to push:";
	cin>>n;
	cout<<endl;
	queue1 q;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		q.push(temp);
	}
	cout<<"Enter the number of elements you want to pop:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		q.pop();
	}
	return 0;
}
