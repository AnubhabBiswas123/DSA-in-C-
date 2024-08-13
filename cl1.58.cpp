//Find the square root of a number(integer with precision)
#include <iostream>
using namespace std;
double moreprecision(int n,int precision,int tempsol)
{
	double factor=1,ans=tempsol;
	for(int i=0;i<precision;i++)
	{
		factor=factor/10;
		for(double j=tempsol;j*j<n;j+=factor)
		{
			ans=j;
		}
	}
	return ans;
} 


int binarysearch(int n)
{
	int start=0,end=n;
	int mid=start+(end-start)/2;
	int ans=-1;
	while(start<=end)
	{
		int square=mid*mid;
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
	int n,precision;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	cout<<"Enter the precision:"<<endl;
	cin>>precision;
	
	int tempsol=binarysearch(n);
	cout<<"The square root of the number is:"<<moreprecision(n,precision,tempsol)<<endl;
}
