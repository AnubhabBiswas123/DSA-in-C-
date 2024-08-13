//lecture 31
//Power of 2 using recursion
#include <iostream>
using namespace std;
int power(int n)
{
	if(n==0)
		return 1;
	return 2*power(n-1);
}




int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<endl;
	cout<<"The power of 2 is:"<<power(n)<<endl;
	return 0;
}
