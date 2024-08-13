//Search in a rotated and sorted array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findpivot(vector<int>& arr,int n)
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
int binarysearch(vector<int>& arr,int start,int end,int key)
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
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=findpivot(arr,n);
    int ans;
    if(arr[pivot]<=k && k<=arr[n-1])
    {
        ans=binarysearch(arr,pivot,n-1,k);
    }
    else
    {
         ans=binarysearch(arr,0,pivot-1,k);
    }
    return ans;
}
int main()
{
	int n,temp,key;
	vector<int> v;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"Enter the elements which you want to search:"<<endl;
	cin>>key;
	int res=search(v,n,key);
	if(res!=-1)
	{
		cout<<"The element is present at index "<<res<<endl;
	}
	else
	{
		cout<<"No such element found in the array"<<endl;
	}
}
