//lecture 29
//Input/Output of a 2D array using dynamic memory allocation for different rows and columns
#include <iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter the no. of rows:";
	cin>>row;
	cout<<endl;
	cout<<"Enter the no. of columns:";
	cin>>col;
	cout<<endl;
	int **ptr= new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i]=new int[col];
	}
	//Creation done
	cout<<"Enter the elements of the 2D array:";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>ptr[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
