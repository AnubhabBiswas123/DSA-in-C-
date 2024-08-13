//Aggresive Cows
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &stalls,int n, int k,int mid)
{
    int CowsCount=1;
    int lastPosition=stalls[0];
    for(int i=0;i<n;i++)
    {
        if(stalls[i]-lastPosition>=mid)
        {
            CowsCount++;
            if(CowsCount==k)
            {
                return true;
            }
            lastPosition=stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k,int n)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int start=0,ans=-1;
    int end=stalls[n-1];
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(isPossible(stalls,n,k,mid))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
	vector<int> v;
	int n,k,temp;
	cout<<"Enter the no. of stalls:"<<endl;
	cin>>n;
	cout<<"Enter the number of cows:"<<endl;
	cin>>k;
	cout<<"Enter the stall positions:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"The maximum possible minimum distance is:"<<aggressiveCows(v,k,n)<<endl;
}
