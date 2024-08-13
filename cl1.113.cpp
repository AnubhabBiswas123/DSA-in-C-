//lecture 34
//Check palindrome in a string using recursion
#include <iostream>
using namespace std;
bool isPalindrome(string s, int i, int j)
{
	if(i>j)			//Base Case
		return true;
	if(s[i]!=s[j])
		return false;
	else
		return isPalindrome(s,i+1,j-1);
}

int main()
{
	string s;
	cout<<"Enter the string:";
	cin>>s;
	cout<<endl;
	if(isPalindrome(s,0,s.length()-1))
		cout<<"This is a palindrome string"<<endl;
	else
		cout<<"This is not a palindrome string"<<endl;
	return 0;
}
