//lecture 22
//Length of the character array
#include <iostream>
using namespace std;
int getlength(char name[])
{
	int count=0;
	for(int i=0;name[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char name[10];
	cout<<"Enter the name:";
	cin>>name;
	cout<<"Your name: "<<name<<endl;
	cout<<"Length:"<<getlength(name)<<endl;
	return 0;
}
