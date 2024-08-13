#include <iostream>
using namespace std;
//Sort 0 1 2 using Dutch flag Algorithm
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void sort012(int arr[],int n)
{
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}	
int main()
{
	int n,arr[20];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort012(arr,n);
	printArray(arr,n);
}
