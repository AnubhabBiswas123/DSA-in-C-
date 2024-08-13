#include <iostream>
using namespace std;
//Linear Search
bool search(int arr[],int size,int a);
int main()
{
	int n,arr[10],a;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element which you want to search:"<<endl;
	cin>>a;
	if(search(arr,n,a))
		cout<<"Element is present in the array"<<endl;
	else
		cout<<"Element is not present in the array"<<endl;
}
bool search(int arr[],int size,int a)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==a)
		{
			return 1;
			break;
		}
	}
	return 0;
}		
