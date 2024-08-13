#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> reverse(vector<int> v)
{
	int s=0,e=v.size()-1;
	while(s<=e)
	{
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}
void print(vector<int> ans)
{
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
int main()
{
	vector <int> v;
	v.push_back(10);
	v.push_back(3);
	v.push_back(45);
	v.push_back(12);
	vector <int> ans= reverse(v);
	
	print(ans);
	return 0;
}

