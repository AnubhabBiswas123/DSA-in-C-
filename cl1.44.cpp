#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    //Write your code here
    int res=0;
    for(int i=0;i<size;i++)
    {
       res=res^arr[i];
    }
    return res;   
}
int main()
{
	int n,arr[10];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The unique element in the array is:"<<findUnique(arr,n)<<endl;
}
