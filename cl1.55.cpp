//Pivot element in a rotated array
#include <iostream>
using namespace std;
int findpivot(int arr[],int n)
{
	int start=0,end=n-1;
	int mid=start+(end-start)/2;
	while(start<end)
	{
		if(arr[mid]>=arr[0])
		{
			start=mid+1;
		}
		else
		{
			end=mid;
		}
		mid=start+(end-start)/2;
	}
	return start;
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
	cout<<"The pivot element of the rotated array is "<<findpivot(arr,n)<<endl;
}
