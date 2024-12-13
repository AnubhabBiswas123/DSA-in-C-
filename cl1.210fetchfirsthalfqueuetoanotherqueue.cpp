#include <iostream>
#include <queue>
using namespace std;
queue<int> fhqtaq(queue<int> q)
{
	queue<int> q1;
	queue<int> q2;
	int n=q.size();
	int front1=0,front2=n/2;
	for(int i=0;i<front2;i++)
	{
		q1.push(q.front());
		q.pop();
	}
	for(int i=front2;i<n;i++)
	{
		q2.push(q.front());
		q.pop();
	}
	while(q2.empty()!=1)
	{
		if(q1.empty()!=1)
		{
			q.push(q1.front());
			q1.pop();
		}
		q.push(q2.front());
		q2.pop();
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
