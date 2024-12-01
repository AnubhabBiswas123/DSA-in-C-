#include <iostream>
#include <stack>
using namespace std;
void deletefrommiddle(stack<int>& st,int count,int n)
{
	if(count==n/2) 		//Base Case
	{
		st.pop();
		return;
	}
	int num=st.top();
	st.pop();
	deletefrommiddle(st,count+1,n);
	st.push(num);
}


int main()
{
	int n,temp;
	stack<int> st;
	cout<<"Enter the no. of elements of the stack:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element:";
		cin>>temp;
		cout<<endl;
		st.push(temp);
	}
	deletefrommiddle(st,0,n);
	while(st.empty()!=1)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	return 0;
}
