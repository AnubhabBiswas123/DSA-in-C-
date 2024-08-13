//Lecture 35
//Merge sort using recursion
#include <iostream>
using namespace std;
void merge(int arr[],int s, int e)
{
	int mid=s+(e-s)/2;
	int len1=mid-s+1;
	int len2=e-mid;
	int* first= new int[len1];
	int* second= new int[len2];
	int arrayindex=s;
	for(int i=0;i<len1;i++)
	{
		first[i]=arr[arrayindex++];
	}
	arrayindex=mid+1;
	for(int i=0;i<len2;i++)
	{
		second[i]=arr[arrayindex++];
	}
	//Merge two sorted arrays
	int index1=0;
	int index2=0;
	arrayindex=s;
	while(index1<len1 && index2<len2)
	{
		if(first[index1]<second[index2])
			arr[arrayindex++]=first[index1++];
		else
			arr[arrayindex++]=second[index2++];
	}
	while(index1<len1)
	{
		arr[arrayindex++]=first[index1++];
	}
	while(index2<len2)
	{
		arr[arrayindex++]=second[index2++];
	}
	delete []first;
	delete []second;
}
	
	
	


void mergesort(int arr[],int s,int e)
{
	if(s>=e)		//Base case
		return;
	int mid=s+(e-s)/2;
	mergesort(arr,s,mid);//Left part sort karo
	mergesort(arr,mid+1,e); //Right part sort karo
	merge(arr,s,e);
}

int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n];
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete []arr;
	return 0;
}
