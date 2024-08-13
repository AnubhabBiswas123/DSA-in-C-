//Lecture 34
//Bubble sort using recursion
#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	if(n==0 || n==1)	//Base Case
		return; 
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
			swap(arr[i],arr[i+1]);
	}
	bubblesort(arr,n-1);
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
	bubblesort(arr,n);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
