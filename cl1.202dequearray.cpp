#include <iostream>
using namespace std;
class deque1
{
	public:
	int front;
	int rear;
	int size;
	int *arr;
	deque1(int n)
	{
		size=n;
		rear=-1;
		front=-1;
		arr= new int[size];
	}
	void push_front(int x)
	{
		//Queue is full or not
		if(isFull())
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		//empty queue check
		else if(front==-1)
			front=rear=0;
		//Circular condition check
		else if(front==0 && rear!=size-1)
			front=size-1;
		//Normal condition check
		else
			front--;
		arr[front]=x;
	}
	void push_back(int x)
	{
		//Queue is full or not
		if(isFull())
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		//empty queue check
		else if(front==-1)
			front=rear=0;
		//Circular condition check
		else if(rear==size-1 && front!=0)
			rear=0;
		//Normal condition check
		else
			rear++;
		arr[rear]=x;
	}
	int pop_front()
	{
		//Queue is empty or not
		if(isEmpty())
			return -1;
		int ans=arr[front];
		//Single element check
		if(front==rear)
			front=rear=-1;
		//Circular condition check
		else if(front==size-1 && rear!=0)
			front=0;
		//Normal condition check
		else
			front++;
		return ans;
	}
	int pop_back()
	{
		//Queue is empty or not
		if(isEmpty())
			return -1;
		int ans=arr[rear];
		//Single element check
		if(front==rear)
			front=rear=-1;
		//Circular condition check
		else if(rear==0 && front!=size-1)
			rear=size-1;
		//Normal condition check
		else
			rear--;
		return ans;
	}
	bool isEmpty()
	{
		if(front==-1)
			return true;
		return false;
	}
	bool isFull()
	{
		if((front==0 && rear==size-1) || (rear+1)%size==front)
			return true;
		return false;
	}
	int front1()
	{
		if(isEmpty())
			return -1;
		return arr[front];
	}
};
int main()
{
	deque1 d(5);
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_front(5);
	cout<<d.pop_back()<<endl;
	cout<<d.pop_front()<<endl;
	return 0;
}
