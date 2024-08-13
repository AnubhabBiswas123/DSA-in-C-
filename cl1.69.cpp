//Lecture 21
//Rotate array
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotate(vector<int> v,int k)
{
	vector<int> temp(v.size());
	for(int i=0;i<v.size();i++)
	{
		temp[(i+k)%v.size()]=v[i];
	}
	v=temp;
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
	int n,temp,k;
	vector<int> v;
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"Enter the limit:";
	cin>>k;
	vector<int> ans=rotate(v,k);
	print(ans);
	return 0;
}
