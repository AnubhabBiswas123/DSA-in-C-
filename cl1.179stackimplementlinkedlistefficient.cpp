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
class stack
{
	public:
	Node* top;
	int currentSize;
	int maxSize;
	stack(int size)
	{
		maxSize=size;
		top=NULL;
		currentSize=0;
	}
	
	bool isEmpty()
	{
		return top==NULL;
	}
	bool isFull()
	{
		return currentSize==maxSize;
	}
	void push(int data)
	{
		if(isFull())
		{
			cout<<"Stack Overflow"<<endl;
		}
		else
		{
			currentSize++;
			Node* temp= new Node(data);
			temp->next=top;
			top=temp;
		}
	}
	void pop()
	{
		if(isEmpty())
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			Node* temp=top;
			top=top->next;
			cout<<"Popped element:"<<temp->data<<endl;
			temp->next=NULL;
			delete temp;
		}
	}
	void print()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			Node* temp=top;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
	}
};

	int main()
	{
		int n;
		cout<<"Enter the size of the stack:";
		cin>>n;
		cout<<endl;
		if(n==0)
			return 0;
		else
		{
			stack st(n);
			st.push(10);
			st.push(20);
			st.push(30);
			st.push(40);
			st.push(50);
			st.pop();
			st.print();
			st.pop();
			st.pop();
			st.pop();
			st.pop();
			return 0;
		}
	}
