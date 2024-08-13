//Lecture 23
//Column sum 
#include <iostream>
using namespace std;
int arr[3][4];
//Row wise Input
void columnsum(int arr[][4])
{
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum=0;
		for(int j=0;j<3;j++)
		{
			sum=sum+arr[j][i];
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
columnsum(arr);
return 0;
}
