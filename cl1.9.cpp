//Pattern 1
#include <iostream>
using namespace std;
int main()
{
	int i=1,j=1,n;
	cout<<"Enter the number of rows:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<"* ";
			j++;
		}
		cout<<"\n";
		i++;
	}
}
