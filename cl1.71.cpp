//Lecture 21
//Add two arrays
#include <iostream>
#include <vector>
using namespace std; 
vector<int> rev(vector<int> v)
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

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i=n-1;
	int j=m-1;
	int carry=0;
	int sum;
	vector<int> v;
	while(i>=0 && j>=0)
	{
		int val1=a[i];
		int val2=b[j];
		sum=val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
		i--;
		j--;
	}
	//1st case- 1st vector bigger
	while(i>=0)
	{
		sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
		i--;
	}
	//2nd case- 2nd vector bigger
	while(j>=0)
	{
		sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
		j--;
	}
	//3rd case-both array same length and there is a carry
	while(carry!=0)
	{
		sum=carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);

	}
	return rev(v);
}
int main()
{
	int n,temp,m;
	vector<int> v1;
        vector<int> v2;
	cout<<"Enter the size of the first array:";
	cin>>n;
	cout<<"Enter the size of the second array:";
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
	vector<int> ans=findArraySum(v1,n,v2,m);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}

