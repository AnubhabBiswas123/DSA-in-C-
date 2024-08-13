//Binary search
#include <iostream>
using namespace std;
int binarysearch(int arr[],int start,int end,int key)
{
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
			break;
		}
		if(key<arr[mid])
		{
			end=mid-1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}
int main()
{
	int n,arr[20],key;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array in increasing or decreasing order:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search in the array:"<<endl;
	cin>>key;
	int res=binarysearch(arr,0,n-1,key);
	if(res!=-1)
	{
		cout<<key<<" is present in "<<res<<"th position"<<endl;
	}
	else
	{
		cout<<"No such element found in the array"<<endl;
	}
}
