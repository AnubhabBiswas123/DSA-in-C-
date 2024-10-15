#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string s="";
	cout<<"Enter a string:";
	getline(cin,s);
	stack<char> st;
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		st.push(ch);
	}
	string ans="";
	while(st.empty()!=1)
	{
		char ch=st.top();
		ans.push_back(ch);
		st.pop();
	}
	cout<<"The reversed string is:"<<ans<<endl;
	return 0;
}
