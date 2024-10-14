#include <iostream>
using namespace std;
class stack
{
	public:
	int top;
	int *arr;
	int size;
	stack(int size)
	{
		this->size=size;
		arr= new int(size);
		top=-1;
	}
	void push(int element)
	{
		if(size-top>1)
		{
			top++;
			arr[top]=element;
		}
		else
		{
			cout<<"Stack overflow"<<endl;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			top--;
		}
	}
	int peek()
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
			return -1;
		}
		else
		{
			return arr[top]; 
		}
	}
	bool isEmpty()
	{
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int main()
{
	stack st(5);
	st.push(22);
	st.push(23);
	st.push(24);
	st.push(25);
	st.push(26);
	st.push(27);
	st.push(28);
	st.pop();
	cout<<"Peak element is:"<<st.peek()<<endl;
	st.pop();
	cout<<"Peak element is:"<<st.peek()<<endl;
	st.pop();
	cout<<"Peak element is:"<<st.peek()<<endl;
	st.pop();
	cout<<"Peak element is:"<<st.peek()<<endl;
	st.pop();
	cout<<"Peak element is:"<<st.peek()<<endl;
	st.pop();
	cout<<"Peak element is:"<<st.peek()<<endl;	
	if(st.isEmpty())
	{
		cout<<"The stack is empty"<<endl;
	}
	else
	{
		cout<<"The stack is not empty"<<endl;
	}
	return 0;
}
	
	
	
