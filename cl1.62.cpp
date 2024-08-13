//Selection sort(sort array in descending order)
#include <iostream>
using namespace std;
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void selectionsort(int arr[],int n)
{
	int maxindex;
	for(int i=0;i<n-1;i++)
	{
		maxindex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[maxindex])
			{
				maxindex=j;
			}
		}
		swap(arr[maxindex],arr[i]);
	}
}

int main()
{
	int n,arr[20];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,n);
	printArray(arr,n);
}
