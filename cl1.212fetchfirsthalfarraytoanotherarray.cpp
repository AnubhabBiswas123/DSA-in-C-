#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n];
	int *arr1= new int[n];
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int f=n/2;
	int count=0,j=0;
	for(int i=f;i<n;i++)
	{
		
			arr1[count]=arr[j];
			count++;
			j++;
		
		arr1[count]=arr[i];
		count++;
	}
	if(n%2==1)
		arr1[n-1]=arr[n-1];
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	return 0;
}
	
	
	
	
	
	
