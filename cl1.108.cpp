//Lecture 33
//Check whether an array is sorted or not using recursion
#include <iostream>
using namespace std;
bool isSorted(int *arr, int n)
{
	if(n==0 || n==1)
		return 1;
	if(arr[0]>arr[1])
		return false;
	else
	{
		return isSorted(arr+1,n-1);
	}
} 




int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n]; //Dynamic memory allocation
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(isSorted(arr,n))
	{
		cout<<"The array is sorted"<<endl;
	}
	else
		cout<<"The array is not sorted"<<endl;
	return 0;
}
