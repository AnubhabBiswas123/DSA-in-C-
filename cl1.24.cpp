//Pattern 16
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,j;
	char ch='A';
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		ch='A'+n-i;
		while(j<=i)
		{
			cout<<ch<<" ";
			j++;
			ch++;
		}
		i++;
		cout<<endl;
	}
}
