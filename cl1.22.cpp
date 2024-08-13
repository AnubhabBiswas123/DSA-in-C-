//Pattern 14
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
		while(j<=i)
		{
			j++;
			cout<<ch<<" ";
			ch++;
		}
		i++;
		cout<<endl;
	}
}
