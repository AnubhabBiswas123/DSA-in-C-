//Lecture 32
//Say digits
#include <iostream>
using namespace std;
void print(int n,string arr[])
{
	if(n==0)              //Base Case
		return;
	int digit= n%10;
	n=n/10;
	print(n,arr);
	cout<<arr[digit]<<" ";
}
int main()
{
	int n;
	string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	cout<<"Enter the number:";
	cin>>n;
	cout<<endl;
	print(n,arr);
	return 0;
}
