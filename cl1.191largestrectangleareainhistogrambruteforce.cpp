#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int area1(vector<int> heights)
{
	int n=heights.size(),temp,count=1,area,newarea,maxarea=INT_MIN;
	for(int i=0;i<n;i++)
	{
		temp=heights[i];
		count=1;
		area=count*temp;
		//Right wala part
		for(int j=i+1;j<n;j++)
		{
			if(heights[j]>=temp)
			{
				count++;
			}
			else
				break;
		}
		//Left wala part
		for(int j=i-1;j>=0;j--)
		{
			if(heights[j]>=temp)
				count++;
			else
				break;
		}
		newarea=count*temp;
		newarea=max(newarea,area);
		maxarea=max(maxarea,newarea);
	}
	return maxarea;
}




int main()
{
	int n,temp;
	cout<<"Enter the no. of heights in the vector:";
	cin>>n;
	cout<<endl;
	vector<int> heights;
	cout<<"Enter all the heights in the vector"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		heights.push_back(temp);
	}
	cout<<"The largest rectangle area in the histogram is: "<<area1(heights)<<endl;
	return 0;
}
