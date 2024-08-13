//WAP TO PRINT SUM OF ALL EVEN NUMBERS
#include <iostream>
using namespace std;
int main()
{
 int n,i=2,sum=0;
 cout<<"Enter the value of n:";
 cin>>n;
 while(i<=n)
 {
 	sum=sum+i;
 	i=i+2;
 }
 cout<<"The sum of even numbers upto "<<n<<" is:"<<sum<<endl;
 }
