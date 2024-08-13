//Pattern 11
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,j;
	cout<<"Enter the range:";
	cin>>n;
	char ch='A';
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<ch<<" ";
			ch++;
			j++;
		}
		i++;
		cout<<endl;
	}
}
