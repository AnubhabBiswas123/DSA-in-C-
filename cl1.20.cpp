//Pattern 12
#include <iostream>
using namespace std;
int main()
{
	int n,j,i=1;
	cout<<"Enter the range:";
	cin>>n;
	char ch='A';
	while(i<=n)
	{
		j=1;
		ch='A'+i-1;
		while(j<=n)
		{
			j++;
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
		i++;
	}
}
