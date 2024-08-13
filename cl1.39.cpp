#include <iostream>
using namespace std;
int max(int arr[],int size);
int min(int arr[],int size);
int main()
{
	int res,n,arr[10];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	res=max(arr,n);
	cout<<"The maximum element of the array is:"<<res<<endl;
	res=min(arr,n);
	cout<<"The minimum element of the array is:"<<res<<endl;
}
int max(int arr[],int size)
{
	int max=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}
int min(int arr[],int size)
{
	int min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	return min;
}






