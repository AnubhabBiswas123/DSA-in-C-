#include<iostream>
#include<vector>
using namespace std;
int circulartour(vector<int> v1, vector<int> v2)
{
	int n=v1.size();
	int balance=0;
	int deficit=0;
	int start=0;
	for(int i=0;i<n;i++)
	{
		balance=balance+v1[i]-v2[i];
		if(balance<0)
		{
			start=i+1;
			deficit=deficit+balance;
			balance=0;
		}
	}
	if(deficit+balance>=0)
		return start;
	return -1;
}
int main()
{
	int n,temp;
	cout<<"Enter the size:";
	cin>>n;
	cout<<endl;
	vector<int> v1;
	vector<int> v2;
	cout<<"Enter the petrol array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v1.push_back(temp);
	}
	cout<<"Enter the distance array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v2.push_back(temp);
	}
	if(circulartour(v1,v2)==-1)
	{
		cout<<"Can't have a circular tour"<<endl;
	}
	else
	{
		cout<<"The starting index is: "<<circulartour(v1,v2)<<endl;
	}
	return 0;
}
