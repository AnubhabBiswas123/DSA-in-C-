//Lecture 24
//GCD of two numbers using iterative method
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	int count=0;
	if(a==0)
		return b;
	if(b==0)
		return a;
	while(a!=b)
	{
		if(a>b){
		
			a=a-b;
			count=1;
		}
		else if(b>a){
			b=b-a;
			count=0;
		}
	}
	if(count==1)
		return b;
	else
		return a;
}


int main()
{
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter the second number:";
	cin>>b;
	cout<<endl;
	cout<<"The gcd of two numbers is:"<<gcd(a,b)<<endl;
	return 0;
}
