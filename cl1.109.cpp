//Lecture 33
//Sum of all the elements of an array using recursion
#include <iostream>
using namespace std;
int getSum(int *arr, int n)
{
	if(n==0)		//Base Case
		return 0;
	return arr[0]+getSum(arr+1,n-1);
}



int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int *arr= new int[n]; //Dynamic allocation
	cout<<endl;
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"The sum of all the elements of the array is:"<<getSum(arr,n)<<endl;
	return 0;
}
