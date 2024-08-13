//Pattern 4
#include <iostream>
using namespace std;
int main()
{
	int i=1,j,n,flag=1;
	cout<<"Enter the value of n:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<flag<<" ";
			flag++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
