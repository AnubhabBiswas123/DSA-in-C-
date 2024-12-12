#include <iostream>
#include <vector>
using namespace std;
int circulartour(vector<int> v1, vector<int> v2)
{
	int sum=0;
	int count=0,balance,petrol,distance;
	for(int i=0;i<v1.size();i++)
	{
		count=0;
		sum=0;
		for(int j=i;j<v2.size();j++)
		{
			petrol=v1[j];
			distance=v2[j];
			balance=petrol-distance;
			sum=sum+balance;
			if(sum<0)
			{
				count=0;
				break;
			}
			count=1;
		}
		if(count==1)
		{
			for(int j=0;j<i;j++)
			{
				petrol=v1[j];
				distance=v2[j];
				balance=petrol-distance;
				sum=sum+balance;
				if(sum<0)
				{
					count=0;
					break;
				}
				count=1;
			}
		}
		if(count==1)
			return i;
	}
		return -1;
}
int main()
{
	int n1,n2,temp;
	vector<int> v1;
	vector<int> v2;
	cout<<"Enter the no. of petrol in litres:";
	cin>>n1;
	cout<<endl;
	cout<<"Enter the no. of distances to next petrol pump:";
	cin>>n2;
	cout<<endl;
	cout<<"Enter the petrol in litres:"<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>temp;
		v1.push_back(temp);
	}
	cout<<"Enter the distance to the next petrol pump:"<<endl;
	for(int i=0;i<n2;i++)
	{
		cin>>temp;
		v2.push_back(temp);
	}
	if(circulartour(v1,v2)==-1)
	 	cout<<"No one can cover the circular tour"<<endl;
	else
		cout<<"The index of the petrol array which can cover the circular tour is:"<<circulartour(v1,v2)<<endl;
	return 0;
}

