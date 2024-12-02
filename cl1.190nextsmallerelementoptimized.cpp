#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int n,temp;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n];
	cout<<"Enter all the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	stack<int> st;
	st.push(-1);
	for(int i=n-1;i>=0;i--)
	{
		temp=arr[i];
		while(st.top()>=temp)
		{
			st.pop();
		}
		arr[i]=st.top();
		st.push(temp);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
