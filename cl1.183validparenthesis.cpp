#include <iostream>
#include <stack>
using namespace std;
bool validparenthesis(string s)
{
	stack<char> st;
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		//Opening Bracket
		if(ch== '(' || ch=='{' || ch=='[')
			st.push(ch);
		else
		{
			//Check if stack is empty or not
			if(st.empty()!=1)
			{
				char top=st.top();
		if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='['))
					st.pop();			
				else
					return false;
			}
			else
				return false;
		}
	}
	if(st.empty())
		return true;
	else
		return false;
}

int main()
{

	string s;
	cout<<"Enter a string:";
	getline(cin,s);
	cout<<endl;
	if(validparenthesis(s))
		cout<<"The string has a valid parenthesis"<<endl;
	else
		cout<<"The string doesn't have a valid parenthesis"<<endl;
	return 0;
}
