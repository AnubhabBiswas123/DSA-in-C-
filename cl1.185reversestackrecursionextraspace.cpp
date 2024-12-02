#include <iostream>
#include <stack>
using namespace std;
void reverse(stack<int>& st,int num)
{
	if(st.empty())
	{
		st.push(num);
		return;
	}
	int n=st.top();
	st.pop();
	reverse(st,num);
	st.push(n);
}


void reversestack(stack<int>& st,int num)
{
	if(st.empty())		//base case
	{
		return;
	}
	
	
	num= st.top();
	st.pop();
	reversestack(st,num);
	reverse(st,num);
}





int main()
{
	stack<int> st;
	int n,temp;
	cout<<"Enter the size of the stack:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element:";
		cin>>temp;
		cout<<endl;
		st.push(temp);
	}
	reversestack(st,0);
	while(st.empty()!=1)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	return 0;
}
	
