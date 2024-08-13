//Pattern 23
#include <iostream>
using namespace std;
int main()
{
	int i=1,j,n,x;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		x=n-i;
		while(x)
		{
			cout<<" ";
			x--;
		}
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		x=i-1;
		while(x)
		{
			cout<<x;
			x--;
		}
		i++;
		cout<<endl;
	}
}
