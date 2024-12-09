#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	cout<<"The size of the queue: "<<q.size()<<endl;
	cout<<"The front element: "<<q.front()<<endl;
	cout<<"The back element: "<<q.back()<<endl;
	q.pop();
	cout<<"The size of the queue: "<<q.size()<<endl;
	cout<<"The front element: "<<q.front()<<endl;
	cout<<"The back element: "<<q.back()<<endl;
	q.pop();
	if(q.empty())
		cout<<"The queue is empty"<<endl;
	else
		cout<<"The queue is not empty"<<endl;
	return 0;
}
