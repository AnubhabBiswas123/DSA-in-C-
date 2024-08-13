//Pattern 3
#include <iostream>
using namespace std;
int main()
{
	int i=1,j,n;
	cout<<"Enter the value of n:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	cout<<endl;
	i=1;
	while(i<=n)
	{
		j=n;
		while(j>=1)
		{
			cout<<j<<" ";
			j=j-1;
		}
		cout<<endl;
		i=i+1;
	}
}	
