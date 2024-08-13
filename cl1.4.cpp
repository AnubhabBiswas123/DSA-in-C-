//WAP TO PRINT SUM OF N NUMBERS
#include <iostream>
using namespace std;
int main()
{
 int n,i=1,sum=0;
 cout << "Enter the range:"<<endl;
 cin>>n;
 while(i<=n)
 {
  sum=sum+i;
  i++;
  
 }
 cout<<sum<<" ";
 } 
