//lecture 22
//Reverse a string
#include <iostream>
using namespace std;
void reverseString(char s[],int l) {
        int st=0,e=l-1;
        while(st<=e)
        {
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
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
	int l=getlength(name);
	cout<<"Length:"<<getlength(name)<<endl;
	reverseString(name,l);
	cout<<name<<endl;
	return 0;
}
    
