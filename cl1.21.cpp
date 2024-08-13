//Pattern 13
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
		while(j<=i)
		{
			j++;
			cout<<ch<<" ";
		}
		i++;
		ch++;
		cout<<endl;
	}
}
