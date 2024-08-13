//Selection sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
void printArray(vector<int>& arr, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int minIndex;
    for(int i=0;i<n-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
	selectionSort(v,n);
	printArray(v,n);
}
	
	
	
	
