//Swapping alternate values in an array
#include <iostream>
using namespace std;
void swapa(int arr[],int size);
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
	swapa(arr,n);
	cout<<"The array after swapping is:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void swapa(int arr[],int size)
{
	int temp;
	for(int i=0;i<size-1;i+=2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}






