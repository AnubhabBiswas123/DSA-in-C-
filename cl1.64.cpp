//Insertion sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
void printArray(int n,vector<int> &arr)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    int temp,j;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                swap(arr[j],arr[j+1]);
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;

    }
}
int main()
{
	int n,temp;
	vector<int> v;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	insertionSort(n,v);
	printArray(n,v);
}
