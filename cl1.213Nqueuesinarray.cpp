#include <iostream>
using namespace std;
class kqueue
{
	public:
	int n;
	int k;
	int* front;
	int* rear;
	int* arr;
	int* next;
	int freeslot;
	kqueue(int n,int k)
	{
		this->n=n;
		this->k=k;
		arr=new int[n];
		next=new int[n];
		rear=new int[k];
		front=new int[k];
		for(int i=0;i<k;i++)
		{
			front[i]=-1;
			rear[i]=-1;
		}
		for(int i=0;i<n;i++)
		{
			next[i]=i+1;
		}
		next[n-1]=-1;
		freeslot=0;
	}
	void enqueue(int data, int qn)
	{
		//Overflow condition
		if(freeslot==-1)
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		//Finding the index
		int index=freeslot;
		//Updating the freeslot
		freeslot=next[index];
		//first element push
		if(front[qn-1]==-1)
		{
			front[qn-1]=index;
		}
		//if it is not the first element in the queue
		else
		{
			next[rear[qn-1]]=index;
		}
		//After pushing the element update the next to -1
		next[index]=-1;
		//Update the rear value of the queue to the pushed index
		rear[qn-1]=index;
		arr[index]=data;	
	}	
	int dequeue(int qn)
	{
		//Empty queue or not
		if(front[qn-1]==-1)	
		{
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		//Agar queue empty nhi hua toh
		int index=front[qn-1];
		//Front value ko next index jo hai current queue ka uss mai update kar rhe hai
		front[qn-1]=next[index];
		freeslot=index;
		return arr[index];
	}
};
int main()
{
	kqueue q(10,3);
	q.enqueue(10,1);
	q.enqueue(15,1);
	q.enqueue(20,2);
	q.enqueue(25,1);	
	cout<<q.dequeue(1)<<endl;
	cout<<q.dequeue(2)<<endl;
	cout<<q.dequeue(1)<<endl;
	cout<<q.dequeue(1)<<endl;
	cout<<q.dequeue(1)<<endl;
	cout<<q.dequeue(2)<<endl;
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
