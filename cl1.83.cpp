//Lecture 23
//Rowwise input in 2D array
#include <iostream>
using namespace std;
int arr[3][4];
//Row wise Input
bool isFound(int arr[][4], int target)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==target)
				return 1;
		}
	}
	return 0;
}
int main()
{
cout<<"Enter all the elements of the 2D array:"<<endl;
for(int i=0;i<3;i++)
{
	for(int j=0;j<4;j++)
	{
		cin>>arr[i][j];
	}
}
int target;
cout<<"Enter the element which you want to find in the array:";
cin>>target;
if(isFound(arr,target))
{
	cout<<"Element found"<<endl;
}
else
{
	cout<<"Element not found"<<endl;
}
return 0;
}
