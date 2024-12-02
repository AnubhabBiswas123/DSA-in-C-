#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string s;
	stack<char> st;
	char top;
	int ans=0,a=0,b=0;
	cout<<"Enter the string:";
	getline(cin,s);
	cout<<endl;
	int len= s.length();
	if(len%2==1)
	{
		cout<<"Not possible to make string valid"<<endl;
		return 0;
	}
	for(int i=0;i<len;i++)
	{
		char ch=s[i];
		if(ch=='{')
			st.push(ch);
		else if(ch=='}')
		{
			if(st.empty()!=1)
			{
				top=st.top();
				if(top=='{')
					st.pop();
				else
					st.push(ch);
			}
			else
				st.push(ch);
		}
	}
	if(st.empty())
	{
		cout<<"Minimum cost to make string valid is 0"<<endl;
		return 0;
	}
	while(st.empty()!=1)
	{
		top=st.top();
		if(top=='{')
			a++;
		else if(top=='}')
			b++;
		st.pop();
	}
	ans=(a+1)/2 + (b+1)/2;
	cout<<"Minimum cost to make string valid is "<<ans<<endl;
	return 0;
}
