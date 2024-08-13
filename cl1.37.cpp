#include <iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter the size of the array:"<<endl;
	cin>>m;
	int arr[m];
	int n,i;
	cout<<"Enter the value which you want to initialize in the array:"<<endl;
	cin>>n;	
	for(i=0;i<m;i++)
	{
		arr[i]=n;
	}
	for(i=0;i<m;i++)
	{
		cout<<arr[i]<<" ";
	}
}

