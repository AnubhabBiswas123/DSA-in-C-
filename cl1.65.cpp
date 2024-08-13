//Testing lecture 19
//vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.pop_back();
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	v.clear();
	cout<<"Capacity->"<<v.capacity()<<endl;
	cout<<"Size->"<<v.size()<<endl;
}
