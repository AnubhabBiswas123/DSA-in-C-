//Find the square root of a number(integer part only)
#include <iostream>
using namespace std;
long long int binarysearch(long long int n)
{
	long long int start=0,end=n;
	long long int mid=start+(end-start)/2;
	long long int ans=-1;
	while(start<=end)
	{
		long long int square=mid*mid;
		if(square==n)
		{
			return mid;
		}
		else if(square<n)
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main()
{
	long long int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	cout<<"The square root of the number is:"<<binarysearch(n)<<endl;
}
