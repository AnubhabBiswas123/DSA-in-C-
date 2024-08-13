//Pattern 24
#include <iostream>
using namespace std;
int main()
{
	int flag=0,n,i=1,j,x=0;
	cout<<"Enter the range:";
	cin>>n;
	
	while(i<=n)
	{
		j=1;
		while(j<=n-i+1)
		{
			cout<<j;
			j++;
		}
		flag=x;
		while(x)
		{
			cout<<"*";
			x--;
		}
		x=flag+2;
		j--;
		while(j>=1)
		{
			cout<<j;
			j--;
		}
		i++;
		cout<<endl;
	}
}
