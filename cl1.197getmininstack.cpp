#include <iostream>
#include <climits>
using namespace std;
class stack
{
	public:
	int top;
	int *arr1;
	int *arr2;
	int mini=INT_MAX;
	int n;
	stack(int n)
	{
		this->n=n;
		arr1=new int[n];
		arr2=new int[n];
		top=-1;
	}
	int getmini(int x)
	{
		mini=min(x,mini);
		return mini;
	}
	
	void push(int x)
	{
		if(top==n-1)
		{
			cout<<"Stack overflow"<<endl;
			return;
		}
		top++;
		arr1[top]=x;
		int res=getmini(x);
		arr2[top]=res;
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack underflow"<<endl;
			return;
		}
		top--;
	}
	void getmin()
	{
		cout<<"The minimum element: "<<arr2[top]<<endl;
		top--;
	}
};
int main()
{
	int n;
	cout<<"Enter the size of the stack:";
	cin>>n;
	cout<<endl;
	stack st(n);
	st.push(5);
	st.push(3);
	st.push(8);
	st.push(2);
	st.push(4);
	st.getmin();
	st.getmin();
	st.getmin();
	st.getmin();
	st.getmin();
	return 0;
}

	
	
