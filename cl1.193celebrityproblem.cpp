#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<endl;
	vector<vector<int>> mat(n,vector<int>(n));
	cout<<"Enter all the elements of the vector"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<n;j++)
		{
			if(mat[i][j]==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(int k=0;k<n;k++)
			{
				if(i!=k && mat[k][i]==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<"The celebrity is: "<<i<<endl;
				return 0;
			}
		}
	}
	if(flag==1)
		cout<<"No celebrity found"<<endl;
	return 0;
}
