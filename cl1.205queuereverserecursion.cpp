#include <iostream>
#include <queue>
using namespace std;
void reverse(queue<int>& q)
{
	if(q.empty())		//Base Case
		return;
	int qfront=q.front();
	q.pop();
	reverse(q);
	q.push(qfront);
}
queue<int> reversequeue(queue<int>& q)
{
	reverse(q);
	return q;
}
int main()
{
	int n,temp;
	queue<int> q;
	cout<<"Enter the no. of elements to be pushed in the queue:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		q.push(temp);
	}
	q=reversequeue(q);
	while(q.empty()!=1)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
