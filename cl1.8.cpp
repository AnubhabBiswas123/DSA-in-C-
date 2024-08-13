//Optimized program to find whether the given number is prime or not
#include <iostream>
using namespace std;
int main()
{
	int i=2,n,flag=1;
	cout<<"Enter a number:";
	cin>>n;
	while(i<n)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1)
		cout<<"This is a prime number"<<endl;
	else
		cout<<"This is not a prime number"<<endl;
}	
