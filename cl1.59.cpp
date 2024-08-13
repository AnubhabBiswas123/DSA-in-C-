//Book Allocation problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int>& v,int n, int m,int mid)
{
	int countStudent=1;
	int pages=0;
	for(int i=0;i<n;i++)
	{
		if(pages+v[i]<=mid)
		{
			pages+=v[i];
		}
		else
		{
			countStudent++;
			if(countStudent>m||v[i]>mid)
				return false;
			pages=v[i];
		}
	}
	return true;
}	


int bookallocation(vector<int>& v,int n, int m)
{
	int start=0,sum=0,ans=-1;
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
	}
	int end=sum;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(isPossible(v,n,m,mid))
		{
			ans=mid;
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
		
	}	
	return ans;	
}		
		



int main()
{
	int n,m,temp;
	vector<int> arr;
	cout<<"Enter the total no. of books:"<<endl;
	cin>>n;
	cout<<"Enter the no. of students:"<<endl;
	cin>>m;
	cout<<"Enter the page no. of each books:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<"The minimum no. of pages is:"<<bookallocation(arr,n,m)<<endl;
}

