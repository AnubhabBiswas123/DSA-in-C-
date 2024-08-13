//Lecture 32
//Count N-ways to reach the N-th stairs
#include <iostream>
using namespace std;
int count(int n)
{
	if(n<0)
		return 0;
	if(n==0)
		return 1;
	return count(n-1)+count(n-2);
}
int main()
{
	int n;
	cout<<"Enter the total number of stairs:";
	cin>>n;
	cout<<endl;
	cout<<"The number of ways to reach "<<n<<" stairs:"<<count(n)<<endl;
	return 0;
}
