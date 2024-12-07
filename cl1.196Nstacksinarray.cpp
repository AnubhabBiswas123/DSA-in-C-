#include <iostream>
using namespace std;
class Nstack
{
	public:
	int *arr;
	int *top;
	int *next;
	int n,s,firstspot;
	Nstack(int N,int S)
	{
		n=N;
		s=S;
		arr= new int[s];
		next= new int[s];
		top= new int[n];
		firstspot=0;
		for(int i=0;i<n;i++)
		{
			top[i]=-1;
		}
		for(int i=0;i<s;i++)
		{
			next[i]=i+1;
		}
		next[s-1]=-1;
	}
	void push(int x, int m)
	{
		//overflow condition
		if(firstspot==-1)
		{
			cout<<"Stack overflow"<<endl;
			return;
		}
		//find the index
		int index=firstspot;
		//Update the firstspot
		firstspot=next[index];
		//Push the element into the array
		arr[index]=x;
		//update the next array
		next[index]=top[m-1];
		//Update the top array
		top[m-1]=index;
		cout<<"Element pushed"<<endl;
	}
	int pop(int m)
	{
		//Underflow condition
		if(top[m-1]==-1)
		{
			return -1;
		}
		int index= top[m-1];
		top[m-1]=next[index];
		next[index]=firstspot;
		firstspot=index;
		return arr[index];
	}
};
int main()
{
	int n,s,res;
	cout<<"Enter the size of the array:";
	cin>>s;
	cout<<endl;
	cout<<"Enter the number of stack:";
	cin>>n;
	cout<<endl;
	Nstack st(n,s);
	st.push(10,1);
	st.push(20,1);
	st.push(30,2);
	res= st.pop(1);
	if(res==-1)
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		cout<<"The popped element is: "<<res<<endl;
	}
	res=st.pop(2);
	if(res==-1)
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		cout<<"The popped element is: "<<res<<endl;
	}
	return 0;
}
