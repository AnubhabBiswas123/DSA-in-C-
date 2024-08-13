//Lecture 20
//Merge two sorted arrays
#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m,int arr3[])
{
	int k=0,i=0,j=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];	 
		}
		else
		{
			arr3[k++]=arr2[j++];
		}
	}
	while(i<n)
	{
		arr3[k++]=arr1[i++];
	}
	while(j<m)
	{
		arr3[k++]=arr2[j++];
	}
}
void print(int arr3[],int n)
{

	for(int i=0;i<n;i++)
	{
		cout<<arr3[i]<<" ";
	}
	cout<<endl;
}	
int main()
{
	int arr1[5]={1,7,11,89,90};
	int arr2[4]={2,3,12,80};
	int arr3[9];
	merge(arr1,arr2,5,4,arr3);
	print(arr3,9);
	return 0;
}
