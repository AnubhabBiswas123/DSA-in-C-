//Lecture 33
//Binary Search using recursion
#include <iostream>
using namespace std;
bool binarySearch(int arr[],int s, int e, int key)
{
	if(s>e)			//Base Case
		return 0;
	int mid=s+(e-s)/2;
	if(arr[mid]==key)
		return 1;
	else if(arr[mid]<key)
		return binarySearch(arr,mid+1,e,key);
	else
		return binarySearch(arr,s,mid-1,key);
}



int main()
{
	int n,key,s=0,e;
	cout<<"Enter the size of the array:";
	cin>>n;
	e=n-1;
	cout<<endl;
	int *arr= new int[n];
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search:";
	cin>>key;
	cout<<endl;
	if(binarySearch(arr,s,e,key))
		cout<<"Element found"<<endl;
	else
		cout<<"Element not found"<<endl;
	return 0;
}
