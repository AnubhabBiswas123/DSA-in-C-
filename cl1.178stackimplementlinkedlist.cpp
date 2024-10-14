#include <iostream>
using namespace std;
class stack
{
	public:
	int data;
	stack* next;
	stack(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
	stack* reverse(stack* head)
	{
		stack* current=head;	
		stack* prev=NULL;
		stack* forward=NULL;
		while(current!=NULL)
		{
			forward=current->next;
			current->next=prev;
			prev=current;
			current=forward;
		}
		return prev;
	}
	void print(stack* head,stack* top)
	{
		top=reverse(head);
		while(top!=NULL)
		{
			cout<<top->data<<" ";
			top=top->next;
		}
		cout<<endl;
	}
	
	void push(stack* &head,int data,stack* &top,int size)
	{
		stack* st= new stack(data);
		if(head==NULL)		//Empty list
		{
			head=st;
			top=st;
		}
		else
		{
			int count=0;
			stack* temp=head;
			while(temp!=top)
			{
				count++;
				temp=temp->next;
			}
			if(count==size-1)
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				top->next=st;
				top=st;
	}}}
	void pop(stack*& head,stack* &top)
	{
		if(top==NULL)	//Empty list
		{
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			top=reverse(head);
			stack* temp=top;
			top=top->next;
			temp->next=NULL;
			head=reverse(top);
			cout<<"Popped element:"<<temp->data<<endl;
			delete temp;
		}
	}
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
			stack* top=NULL;
			stack* head=NULL;
			push(head,10,top,n);
			push(head,20,top,n);
			push(head,30,top,n);
			push(head,40,top,n);
			pop(head,top);
			pop(head,top);
			push(head,50,top,n);
			push(head,60,top,n);
			push(head,70,top,n);
			print(head,top);
			return 0;
		}
	}
