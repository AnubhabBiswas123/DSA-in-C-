#include <iostream>
using namespace std;
class circularqueue
{
	public:
	int front;
	int rear;
	int *arr;
	int size;
	circularqueue(int size)
	{
		this->size=size;
		front=rear=-1;
		arr= new int[size];
	}
	void enqueue(int data)
	{
		//Check whether queue is full or not
		if((rear==size-1 && front==0) || (rear==(front-1)%(size-1)))
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		if(front==-1) 		//Empty queue
		{
			front=rear=0;
		}
		//Circular queue condition
		else if(rear==size-1 && front!=0)
			rear=0;
		//Normal push condition
		else
			rear++;
		arr[rear]=data;
	}
	int dequeue()
	{
		//Check whether queue is empty or not
		if(front==-1)
			return -1;
		int ans=arr[front];
		//Single element
		if(front==rear)
			rear=front=-1;
		//Circular queue condition check
		else if(front==size-1)
			front=0;
		//Normal dequeue condition
		else
			front++;
		return ans;
	}
	bool empty()
	{
		if(front==-1)
			return true;
		return false;
	}
};
int main()
{
	int n,N,temp;
	cout<<"Enter the size of the queue:";
	cin>>n;
	cout<<endl;
	cout<<"Enter the no. of elements you want to push:";
	cin>>N;
	cout<<endl;
	circularqueue q(n);
	cout<<"Enter all the data:"<<endl;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		q.enqueue(temp);
	}
	cout<<"Enter the no. of elements you want to pop:";
	cin>>N;
	cout<<endl;
	for(int i=0;i<N;i++)
	{
		if(q.empty())
		{
			cout<<"Queue is empty"<<endl;
			break;
		}
		cout<<"The popped element: "<<q.dequeue()<<endl;
	}
	return 0;
}

