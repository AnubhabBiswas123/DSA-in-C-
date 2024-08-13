//Lecture 23
//Row sum 
#include <iostream>
using namespace std;
int arr[3][4];
//Row wise Input
void rowsum(int arr[][4])
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		sum=0;
		for(int j=0;j<4;j++)
		{
			sum=sum+arr[i][j];
		}
		cout<<sum<<" ";
	}
	cout<<endl;
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
//Output
rowsum(arr);
return 0;
}
