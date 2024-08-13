//Pattern 18
#include <iostream>
using namespace std;
int main()
{
	int i=1,n,j;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=n-i+1;
		while(j>=1)
		{
			cout<<"*";
			j--;
		}
		i++;
		cout<<endl;
	}
}
