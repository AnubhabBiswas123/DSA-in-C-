//Lecture 31
//Printing numbers
#include <iostream>
using namespace std;
void print(int n)
{
	if(n==0)
		return;
	print(n-1);
	cout<<n<<endl;
}




int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<endl;
	print(n);
	return 0;
}
