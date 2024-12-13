#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<int> fhqtaq(queue<int> q)
{
	stack<int> st;
	int n=q.size();
	int f=n/2;
	for(int i=0;i<f;i++)
	{
		st.push(q.front());
		q.pop();
	}
	for(int i=0;i<f;i++)
	{
		q.push(st.top());
		st.pop();
	}
	for(int i=f;i<n;i++)
	{
		q.push(q.front());
		q.pop();
	}
	for(int i=0;i<f;i++)
	{
		st.push(q.front());
		q.pop();
	}
	for(int i=0;i<f;i++)
	{
		q.push(st.top());
		st.pop();
		q.push(q.front());
		q.pop();
	}
	if(n%2==1)
	{
		q.push(q.front());
		q.pop();
	}
	return q;
}
int main()
{
	int n,temp;
	queue<int> q;
	cout<<"Enter the no. of elements you want to push:";
	cin>>n;
	cout<<endl;
	cout<<"Enter all the elements of the queue:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		q.push(temp);
	}
	queue<int> ans=fhqtaq(q);
	while(ans.empty()!=1)
	{
		cout<<ans.front()<<" ";
		ans.pop();
	}
	cout<<endl;
	return 0;
}
