//Fibonacci series
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,a=0,b=1,c;
	cout<<"Enter the range:";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n-2;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	cout<<endl;
}	
	
