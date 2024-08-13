//Pattern 6
#include <iostream>
using namespace std;
int main()
{
	int i=1,n,j;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			j++;
			cout<<i<<" ";
		}
		cout<<endl;
		i++;
	}
}
