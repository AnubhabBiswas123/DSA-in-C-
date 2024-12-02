#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>& st, int x)
{
	if(st.empty())	//Base Case
	{
		st.push(x);
		return;
	}
	int num=st.top();
	st.pop();
	insert(st,x);
	st.push(num);
}
	



int main()
{
	stack<int> st;
	int x,n,temp;
	cout<<"Enter the size of the stack:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element:";
		cin>>temp;
		cout<<endl;
		st.push(temp);
	}
	cout<<"Enter the element which you want to insert at the bottom:";
	cin>>x;
	cout<<endl;
	insert(st,x);
	while(st.empty()!=1)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	return 0;
}
