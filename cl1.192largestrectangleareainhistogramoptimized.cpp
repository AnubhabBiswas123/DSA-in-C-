#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;
vector<int> nextsmallerelement(vector<int> heights, int n)
{
	vector<int> ans(n);
	stack<int> st;
	st.push(-1);
	int temp;
	for(int i=n-1;i>=0;i--)
	{
		temp=heights[i];
		while(st.top()!=-1 && heights[st.top()]>=temp)
		{
			st.pop();
		}
		ans[i]=st.top();
		st.push(i);
	}
	return ans;
}
vector<int> previoussmallerelement(vector<int> heights, int n)
{
	vector<int> ans(n);
	stack<int> st;
	st.push(-1);
	int temp;
	for(int i=0;i<n;i++)
	{
		temp=heights[i];
		while(st.top()!=-1 && heights[st.top()]>=temp)
		{
			st.pop();
		}
		ans[i]=st.top();
		st.push(i);
	}
	return ans;
}


int largestarea(vector<int> heights)
{
	int n=heights.size();
	vector<int> next(n);
	vector<int> prev(n);
	next=nextsmallerelement(heights,n);
	prev=previoussmallerelement(heights,n);
	int l,b,area=INT_MIN,newarea;
	for(int i=0;i<n;i++)
	{
		l=heights[i];
		if(next[i]==-1)
		{
			next[i]=n;
		}
		b=next[i]-prev[i]-1;
		newarea=l*b;
		area=max(area,newarea);
	}
	return area;
}




int main()
{
	int n,temp;
	cout<<"Enter the size of the vector:";
	cin>>n;
	cout<<endl;
	vector<int> heights;
	cout<<"Enter all the elements of the vector"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		heights.push_back(temp);
	}
	cout<<"The largest area of the histogram is: "<<largestarea(heights)<<endl;
	return 0;
}
