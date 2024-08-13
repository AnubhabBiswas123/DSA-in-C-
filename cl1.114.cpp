//Lecture 34
//Check If Binary Representation of a Number is Palindrome using recursion
#include <iostream>
#include <string>
using namespace std; 
bool isPalindrome(string ans,long long i, long long j){
	if(i>j)
		return true;
	if(ans[i]!=ans[j])
		return false;
	else{
		return isPalindrome(ans,i+1,j-1);
	}
}


bool checkPalindrome(long long N)
{
	// Write your code here.
	long long q=N;
	long long s;
	string ans="";
	while(q!=0){
		s=q%2;
		q=q/2;
		string S=to_string(s);
		ans=ans+S;
	}
	return isPalindrome(ans,0,ans.length()-1);
}
int main()
{
	long long N;
	cout<<"Enter a number:";
	cin>>N;
	cout<<endl;
	if(checkPalindrome(N))
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;
	return 0;
}
