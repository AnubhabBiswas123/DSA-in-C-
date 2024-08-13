//Lecture 32
//Reach home using recursion
#include <iostream>
using namespace std;
void destination(int src, int des)
{
	cout<<"Source:"<<src<<" Destination:"<<des<<endl;
	if(src==des)
	{
		cout<<"Pohoch gya"<<endl;
		return;
	}
	src++;
	destination(src,des);
}


int main()
{
	int src,des;
	cout<<"Enter the source:";
	cin>>src;
	cout<<endl;
	cout<<"Enter the destination:";
	cin>>des;
	cout<<endl;
	destination(src,des);
	return 0;
}
