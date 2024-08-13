//Pattern 17
#include <iostream>
using namespace std;
int main()
{
	int i=1,n,x,j;
	cout<<"Enter the range:";
	cin>>n;
	
	while(i<=n)
	{
		x=n-i;
		j=1;
		while(x>=1)
		{
			cout<<" ";
			x--;
		}
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		i++;
		cout<<endl;
	}
}
		
			
