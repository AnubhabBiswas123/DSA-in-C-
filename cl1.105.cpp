//lecture 32
//Fibonacci series using recursion
#include <iostream>
using namespace std;
int fib(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fib(n-1)+fib(n-2);
}


int main()
{
	int n;
	cout<<"Enter the range:";
	cin>>n;
	cout<<endl;
	cout<<"The "<<n<<"th term of the fibonacci series is:"<<fib(n)<<endl;
	return 0;
}
