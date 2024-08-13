//Pattern 10
#include <iostream>
using namespace std;
int main()
{
	int i=1,n,j;
	char ch='A';
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<ch<<" ";
			j++;
		}
		i++;
		ch++;
		cout<<endl;
	}
}
	
