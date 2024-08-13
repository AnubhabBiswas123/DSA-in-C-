#include <iostream>
using namespace std;
int sum(int arr[],int size);
int main()
{
	int n,arr[10];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The sum of all the elements of the array is:"<<sum(arr,n)<<endl;
}
int sum(int arr[],int size)
{
	int res=0;
	for(int i=0;i<size;i++)
	{
		res=res+arr[i];
	}
	return res;
}
