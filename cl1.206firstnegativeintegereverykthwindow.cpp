#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> find(vector<int> v,int k)
{
	deque<int> dq;
	//Find the first window
	vector<int> ans;
	for(int i=0;i<k;i++)
	{
		//addition
		if(v[i]<0)
			dq.push_back(i);
	}
	//finding the answer
	if(dq.empty()!=1 && v[dq.front()]<0)
		ans.push_back(v[dq.front()]);
	else
		ans.push_back(0);
	//Find for the remaining windows
	int n=v.size();
	for(int i=k;i<n;i++)
	{
		//Removal	
		if(dq.empty()!=1 && i-dq.front()>=k)
			dq.pop_front();
		//Addition
		if(v[i]<0)
			dq.push_back(i);
		//Answer nikalo
		if(dq.empty()!=1 && v[dq.front()]<0)
			ans.push_back(v[dq.front()]);
		else
			ans.push_back(0);
	}
	return ans;
}
int main()
{
	vector<int> v;
	int n,temp,k;
	cout<<"Enter the no. of elements to be stored in vector:";
	cin>>n;
	cout<<endl;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<endl;
	vector<int> ans=find(v,k);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
