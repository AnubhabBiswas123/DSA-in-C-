//Pattern 7
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,flag=1,j;
	cout<<"Enter the range:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<flag<<" ";
			flag++;
			j++;
		}
		i++;
		cout<<endl;
	}
}
