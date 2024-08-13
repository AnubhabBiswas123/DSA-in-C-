//WAP TO FIND WHETHER A GIVEN NUMBER IS PRIME OR NOT
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,count=0;
	cout<<"Enter a number:";
	cin>>n;
	while(i<=n)
	{
		if(n%i==0)
			count++;
		i++;	
	}
	if(count==2)
		cout<<"This is a prime number"<<endl;
	else
		cout<<"This is not a prime number"<<endl;
	
}
