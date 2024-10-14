#include <iostream>
using namespace std;
class twostack
{
	public:
	int top1;
	int top2;
	int size;
	int *arr;
	twostack(int size)
	{
		this->size=size;
		arr= new int[size];
		top1=-1;
		top2=size;
	}
	
	void push1(int element)
	{
		if(top2-top1>1)
		{
			top1++;
			arr[top1]=element;
		}
		else
		{
			cout<<"Stack overflow"<<endl;
		}
	}
	void push2(int element)
	{
		if(top2-top1>1)
		{
			top2--;
			arr[top2]=element;
		}
		else
		{
			cout<<"Stack overflow"<<endl;
		}
	}
	int pop1()
	{
		if(top1==-1)
		{
			cout<<"Stack underflow"<<endl;
			return -1;
		}
		else
		{
			int ans=arr[top1];
			top1--;
			return ans;
		}
	}
	int pop2()
	{
		if(top2==size)
		{
			cout<<"Stack underflow"<<endl;
			return -1;
		}
		else
		{
			int ans=arr[top2];
			top2++;
			return ans;
		}
	}
};
int main()
{
	twostack st(8);
	st.push1(7);
	st.push1(6);
	st.push1(5);
	st.push2(4);
	st.push2(3);
	st.push2(2);
	st.push1(9);
	st.push2(10);
	st.push1(11);
	st.push2(12);
	cout<<"The popped element in the first stack:"<<st.pop1()<<endl;
	cout<<"The popped element in the second stack:"<<st.pop2()<<endl;
	return 0;
}





