//Pattern 5
#include <iostream>
using namespace std;
int main()
{
	int j,n,i=1;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<"* ";
			j++;
		}
		i++;
		cout<<endl;
	}
}
