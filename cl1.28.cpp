//Pattern 20
#include <iostream>
using namespace std;
int main()
{
	int i=1,j,n,x;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=n-i+1;
		x=i-1;
		while(x)
		{
			cout<<" ";
			x--;
		}
		while(j>=1)
		{
			cout<<i;
			j--;
		}
		i++;
		cout<<endl;
	}
}
