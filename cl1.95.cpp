//Lecture 28
//creating an array of n size in heap memory(dynamic memory allocation)
#include <iostream>
using namespace std;
int getSum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

int main()
{
	int n;
	cout<<"Enter the size:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n];
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	int ans=getSum(arr,n);
	cout<<"The sum of all the elements of the array is:"<<ans<<endl;
	return 0;
}
