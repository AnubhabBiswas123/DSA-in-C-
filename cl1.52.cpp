#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int e)
{
	int start=0,end=n-1,ans=-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==e)
		{
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]<e)
		{
			start=mid+1;
		}
		else if(arr[mid]>e)
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int lastocc(int arr[],int n,int e)
{
	int start=0,end=n-1,ans=-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==e)
		{
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]<e)
		{
			start=mid+1;
		}
		else if(arr[mid]>e)
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int main()
{
	int n,arr[20],res,e;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array in ascending or descending order:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element which you want to search in the array:"<<endl;
	cin>>e;
	res=firstocc(arr,n,e);
	if(res!=-1)
		cout<<"The leftmost position of the element is "<<res<<endl;
	else
		cout<<"No such element present in the array"<<endl;
	res=lastocc(arr,n,e);
	if(res!=-1)
		cout<<"The rightmost position of the element is "<<res<<endl;
	else
		cout<<"No such element present in the array"<<endl;
}	
	
	
