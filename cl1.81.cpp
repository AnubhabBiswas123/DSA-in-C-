//Lecture 23
//Rowwise input in 2D array
#include <iostream>
using namespace std;
int arr[3][4];
//Row wise Input
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
//Output
for(int i=0;i<3;i++)
{
	for(int j=0;j<4;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
return 0;
}
