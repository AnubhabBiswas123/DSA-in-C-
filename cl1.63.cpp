//Bubble Sort
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void bubblesort(int arr[], int n)
{
	int count;
	for(int i=1;i<n;i++)
	{
		count=0;
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				count=1;
				swap(arr[j],arr[j+1]);
			}
		}
		if(count==0)
		{
			break;
		}
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
	bubblesort(arr,n);
	printArray(arr,n);
}
