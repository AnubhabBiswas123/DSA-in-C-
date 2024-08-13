//Lecture 33
//Linear Search using recursion
#include <iostream>
using namespace std;
bool linearSearch(int *arr,int n,int key)
{
	if(n==0)		//Base Case
		return 0;
	if(arr[0]==key)
		return 1;
	return linearSearch(arr+1,n-1,key);
}



int main()
{
	int n,key;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	int *arr= new int[n];
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Enter the element which you want to search:";
	cin>>key;
	if(linearSearch(arr,n,key))
	{
		cout<<"Element found"<<endl;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
}
