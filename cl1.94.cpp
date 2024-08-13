//Lecture 26
//Pointer and functions
//Sum of array
#include <iostream>
using namespace std;
int getSum(int arr[],int n)
{
	cout<<sizeof(*arr)<<endl;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}



int main()
{
	int arr[6]={1,2,3,4,5,8};
	cout<<"The sum of the array is:"<<getSum(arr+3,3)<<endl;
	return 0;
}
 
