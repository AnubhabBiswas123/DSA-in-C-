//Pattern 19
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,j,x;
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
			cout<<"*";
			j--;
		}
		i++;
		cout<<endl;
	}
}
