//Decimal to binary
#include <iostream>
using namespace std;
int main()
{
	int n,digit,answer=0,j=0,power=1;
	cout<<"Enter a number:";
	cin>>n;
	while(n!=0)
	{
		if(j==0)
			power=1;
		else
			power=power*10;
		
		digit=n&1;
		j++;
		answer=power*digit+answer;
		n=n>>1;
	}
	cout<<"The binary value of the given number is:"<<answer<<endl;
}
		
