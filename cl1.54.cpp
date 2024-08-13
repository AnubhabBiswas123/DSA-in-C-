//Finding the peak element in a mountain array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findpeak(vector<int>& v)
{
	int start=0,end=v.size()-1;
	int mid=start+(end-start)/2;
	while(start<end)
	{
		if(v[mid]<v[mid+1])
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
	int n,temp;
	vector<int> v;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"The peak element of the given mountain array is "<<findpeak(v)<<endl;
}
