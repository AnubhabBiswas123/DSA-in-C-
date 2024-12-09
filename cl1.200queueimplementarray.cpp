#include <iostream>
using namespace std;
class queue1
{
	public:
	int qfront;
	int rear;
	int *arr;
	int size;
	queue1()
	{
		size=100;
		arr= new int[size];
		qfront=0;
		rear=0;
	}
	void enqueue(int data)
	{
		if(rear==size)
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		arr[rear]=data;
		rear++;
	}
	int dequeue()
	{
		if(qfront==rear)
			return -1;
		int ans=arr[qfront];
		qfront++;
		if(rear==qfront)
		{
			rear=0;
			qfront=0;
		}
		return ans;
	}
	int front()
	{
		if(qfront==rear)
			return -1;
		return arr[qfront];
	}
	bool empty()
	{
		if(rear==qfront)
			return true;
		return false;
	}
};
int main()
{
	queue1 q;
	int n,temp;
	cout<<"Enter the no. of elements you want to push:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data:"<<endl;
		cin>>temp;
		q.enqueue(temp);
	}
	cout<<"Enter the no. of elements you want to pop:";
	cin>>n;
	cout<<endl;
	cout<<"The front element before pop:"<<q.front()<<endl;
	for(int i=0;i<n;i++)
	{
		if(q.empty())
			cout<<"Queue is empty"<<endl;
		else
		        cout<<q.dequeue()<<endl;
	}
	if(q.empty())
		cout<<"The queue is empty"<<endl;
	else
		cout<<"The queue is not empty"<<endl;
	return 0;
}	
