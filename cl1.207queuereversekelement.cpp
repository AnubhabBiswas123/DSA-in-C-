#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<int> reverse(queue<int> q, int k)
{
	stack<int> st;
	for(int i=0;i<k;i++)
	{
		st.push(q.front());
		q.pop();
	}
	while(st.empty()!=1)
	{
		q.push(st.top());
		st.pop();
	}
	for(int i=0;i<q.size()-k;i++)
	{
		int qfront=q.front();
		q.push(qfront);
		q.pop();
	}
	return q;
}
int main()
{
	int n,temp,k;
	queue<int> q;
	cout<<"Enter the no. of elements to be pushed into queue:";
	cin>>n;
	cout<<endl;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		q.push(temp);
	}
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<endl;
	q=reverse(q,k);
	while(q.empty()!=1)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}
