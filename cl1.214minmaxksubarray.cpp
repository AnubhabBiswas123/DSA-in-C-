//Bruteforce solution
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int summinmaxksubarray(int *arr,int n,int k)
{
	int mini;
	int maxi;
	int sum=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		count=0;
		mini=INT_MAX;
		maxi=INT_MIN;
		int j=i;
		if(n-j>=k)
		{
			for(;j<k+i;j++)
			{
				maxi=max(maxi,arr[j]);
				mini=min(mini,arr[j]);
				count=1;
			}
		}
		if(count==1)
		{
			sum=sum+maxi+mini;
		}
		else
		{
			break;
		}
	}
	return sum;
}
int main()
{
	int n,k;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	int* arr= new int[n];
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the size of k:";
	cin>>k;
	cout<<endl;
	cout<<"The sum of minimum and maximum element of the subarray of size k is :"<<summinmaxksubarray(arr,n,k)<<endl;
	cout<<endl;
	delete[] arr;
	return 0;
}
