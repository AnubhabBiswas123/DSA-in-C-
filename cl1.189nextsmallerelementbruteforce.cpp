#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int n,flag=0,min;
	cout<<"Enter the no. of elements in the array:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n];
	int *arr1= new int[n];
	cout<<"Enter all the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		flag=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<temp)
			{
				flag=1;
				arr1[i]=arr[j];
				break;
			}
		}
		if(flag==0)
			arr1[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	delete[] arr;
	delete[] arr1;
	cout<<endl;
	return 0;
}
