//Reverse an array
//Reversing an array
#include <iostream>
using namespace std;
void reverse(int arr[],int size);
int main()
{
	int n,arr[10];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	reverse(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reverse(int arr[],int size)
{
	int temp,start=0,end=size-1;
	while(start<=end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}









