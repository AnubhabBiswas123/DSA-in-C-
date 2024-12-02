#include <iostream>
#include <stack>
using namespace std;
void sort(stack<int>& st, int num)
{
	if(st.empty() || num > st.top())	//Base Case
	{
		st.push(num);
		return;
	}
	int n=st.top();
	st.pop();
	sort(st,num);
	st.push(n);
}



void sortstack(stack<int>& st)
{
	if(st.empty())		//Base Case
	{
		return;
	}
	int num=st.top();
	st.pop();
	sortstack(st);
	sort(st,num);
}



int main()
{
	int n,temp;
	stack<int> st;
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
	sortstack(st);
	while(st.empty()!=1)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	return 0;
}
