#include <iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string:";
	getline(cin,s);
	int i;
	for( i=0;s[i]!='\0';i++);
	cout<<"The length of the string is:"<<i<<endl;
	return 0;
}
