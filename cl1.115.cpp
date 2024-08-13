//Lecture 34
//Power of a number - optimal code using recursion
#include <iostream>
using namespace std;
int power(int a, int b)
{
	if(b==0)		//Base Case
		return 1;
	if(b==1)
		return a;
	int ans= power(a,b/2);
	if(b%2==0)		//b is even
		return ans*ans;
	else
		return a*ans*ans;
}



int main()
{
	int a,b;
	cout<<"Enter the number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter the power:";
	cin>>b;
	cout<<endl;
	cout<<"The power of the number is:"<<power(a,b);
	return 0;
}
