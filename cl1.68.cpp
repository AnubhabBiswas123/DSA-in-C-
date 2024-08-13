//lecture 20
//Move zeroes to the right
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> movz(vector<int> v)
{
	int nonzero=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=0)
		{
			swap(v[nonzero],v[i]);
			nonzero++;
		}
	}
	return v;
}
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}


int main()
{
	int n,temp;
	vector <int> v;
	cout<<"Enter the size of the vector:";
	cin>>n;
	cout<<"Enter all the elements of the vector:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	vector<int> ans=movz(v);
	print(ans);
	return 0;
}
