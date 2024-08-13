//lecture 22
//Remove all adjacent duplicates in string
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string rad(string s)
{
	int n=s.length();
	int i=0;
	stack<char> sh;
	while(i<n)
	{
		if(sh.empty() || sh.top()!=s[i])
		{
			sh.push(s[i]);
		}
		else
		{
			sh.pop();
		}
		i++;
	}
		string ans="";
	while(!sh.empty())
	{
		char ch=sh.top();
		sh.pop();
		ans=ans+ch;
	}
	reverse(ans.begin(),ans.end());
	return ans;	
}		

int main()
{
	string s;
	cout<<"Enter a string:";
	cin>>s;
	cout<<"The string after removing all the adjacent duplicates is:"<<rad(s)<<endl;
	return 0;
}
