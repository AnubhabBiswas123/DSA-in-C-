//Lecture 31
//factorial using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
		return 1;
	return n*factorial(n-1);;
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<endl;
	int ans=factorial(n);
	cout<<"The factorial is:"<<ans<<endl;
	return 0;
}
