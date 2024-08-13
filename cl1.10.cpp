//Pattern 2
#include <iostream>
using namespace std;
int main()
{
	int i=1,j,n;
	cout<<"Enter the number of rows:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<i<<" ";
			j++;
		}
		i++;
		cout<<endl;
	}
}
