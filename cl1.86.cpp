//Lecture 23
//largest row sum 
#include <iostream>
#include <climits>
using namespace std;
int arr[3][4];
//Row wise Input
void rowsum(int arr[][4])
{
	int sum=0;
	int maxi=INT_MIN;
	int rowIndex=-1;
	for(int i=0;i<3;i++)
	{
		sum=0;
		for(int j=0;j<4;j++)
		{
			sum=sum+arr[i][j];
		}
		if(sum>maxi)
		{
			maxi=sum;
			rowIndex=i;
		}
	}
	cout<<"The maximum rowsum and its index is "<<maxi<<" "<<rowIndex<<" respectively";
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
