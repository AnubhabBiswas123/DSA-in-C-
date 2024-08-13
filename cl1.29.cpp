//Pattern 21
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,j,x;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		x=n-i;
		j=1;
		while(x)
		{
			cout<<" ";
			x--;
		}
		while(j<=i)
		{
			cout<<i;
			j++;
		}
		i++;
		cout<<endl;
	}
}
