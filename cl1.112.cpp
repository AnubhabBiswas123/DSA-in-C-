//Lecture 34
//Reverse a string using recursion
#include <iostream>
using namespace std;
void reverse(string& s,int i,int j)
{
	if(i>j)		//Base Case
		return;
	swap(s[i++],s[j--]);
	return reverse(s,i,j);
}


int main()
{
	string s;
	cout<<"Enter a string:";
	cin>>s;
	cout<<endl;
	int i=0,j=s.length()-1;
	reverse(s,i,j);
	cout<<s<<endl;
	return 0;
}
