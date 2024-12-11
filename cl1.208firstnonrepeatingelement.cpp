#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;
string nrepeat(string s)
{
	unordered_map<char,int> count;
	queue<int> q;
	string ans=" ";
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		count[ch]++;
		q.push(ch);
		while(q.empty()!=1)
		{
			if(count[q.front()]>1)
			{
				q.pop();
			}
			else
			{
				ans.push_back(q.front());
				break;
			}
		}
		if(q.empty())
			ans.push_back('#');
	}
	return ans;
}	
int main()
{
	string s;
	cout<<"Enter the string:";
	getline(cin,s);
	cout<<endl;
	string ans=nrepeat(s);
	cout<<"First non repeating element: "<<ans<<endl;
	return 0;
}
