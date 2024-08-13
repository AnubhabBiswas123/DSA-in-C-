//Lecture 30
//Inline functions
#include <iostream>
using namespace std;
inline int compare(int &a, int &b)
{
	return (a>b)?a:b;
}

int main()
{
	int a=10,b=5;
	int ans= compare(a,b);
	cout<<ans<<" is greater"<<endl;
	
	
	a=a+3;
	b=b+1;
	ans= compare(a,b);
	cout<<ans<<" is greater"<<endl;
	return 0;
}
