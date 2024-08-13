//Pattern 22
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
		x=i;
		while(j>=1)
		{
			cout<<x;
			j--;
			x++;
		}
		cout<<endl;
		i++;
	}
}
