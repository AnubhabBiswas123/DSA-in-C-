//Lecture 21
//Check if array is sorted and rotated
#include <iostream>
#include <vector>
using namespace std;
bool sor(vector<int> v)
{
	int count=0;
	for(int i=1;i<v.size();i++)
	{
		if(v[i-1]>v[i])
			count++;
	}
	if(v[v.size()-1]>v[0])
		count++;
	return count<=1;
}

int main()
{
	int n,temp;
	vector<int> v;
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	bool ans=sor(v);
	if(ans)
	{
		cout<<"This is a sorted and rotated array"<<endl;
	}
	else
	{
		cout<<"This is not a sorted and rotated array"<<endl;
	}
	
	return 0;
}
