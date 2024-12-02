#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string s;
	bool redundant=false;
	stack<char> st;
	cout<<"Enter a string:";
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		if(ch=='(' || ch=='+' || ch=='*' || ch=='-' || ch=='/')
		{
			st.push(ch);
		}
		else if(ch==')')
		{
			redundant=true;
			char top=st.top();
			while(top!='(')
			{
				if(top=='+' || top=='*' || top=='-' || top=='/')
				{
					redundant=false;
				}
				st.pop();
				top=st.top();
			}
			st.pop();
			if(redundant==true)
			{
				cout<<"There are redundant brackets"<<endl;
				return 0;
			}
		}
	}
	if(redundant==true)
			{
				cout<<"There are redundant brackets"<<endl;
				return 0;
			}
	else
		{
			cout<<"There are no redundant brackets"<<endl;
				return 0;
		}
}

