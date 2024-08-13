#include <iostream>
using namespace std;
void printarray(int a[],int size);
int main()
{
	int n;
	cout<<"Enter the size of the first array:"<<endl;
	cin>>n;
	int first[10]={1,2,3};
	printarray(first,n);
	cout<<"Enter the size of the second array:"<<endl;
	cin>>n;
	int second[10]={0};
	printarray(second,n);
	cout<<"Enter the size of the third array:"<<endl;
	cin>>n;
	int third[10]={1};
	printarray(third,n);
}
void printarray(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
