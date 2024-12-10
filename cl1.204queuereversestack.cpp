#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<int> reverse(queue<int>& q)
{
	int n=q.size();
	stack<int> st;
	for(int i=0;i<n;i++)
	{
		st.push(q.front());		
		q.pop();
	}
	int i=0;
	while(st.empty()!=1)
	{
		q.push(st.top());
		st.pop();
	}
	return q;
}

int main()
{
	int n,temp;
	cout<<"Enter the no. of elements you want to push:";
	cin>>n;
	cout<<endl;
	queue<int> q;
	cout<<"Enter the elements to be pushed:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		q.push(temp);
	}
	q=reverse(q);
	for(int i=0;i<n;i++)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}
