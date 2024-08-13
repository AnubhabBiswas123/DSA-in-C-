#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	int i=0,j=0;
	while(i<n&&j<m)
	{
		if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	return ans;
}
int main()
{
	int m,n,temp;
	vector<int> v1;
	vector<int> v2;
	cout<<"Enter the size of the first array:"<<endl;
	cin>>n;
	cout<<"Enter the size of the second array:"<<endl;
	cin>>m;
	cout<<"Enter all the elements of the first array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v1.push_back(temp);
	}
	cout<<"Enter all the elements of the second array:"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>temp;
		v2.push_back(temp);
	}
	vector<int> res=findArrayIntersection(v1,n,v2,m);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<" ";
	}
}
	
