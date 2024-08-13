//Lecture 22
//Maximum occuring characters in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string:";
	cin>>s;
	int arr[26]={0};
	int number=0;
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		number=ch-'a';
		arr[number]++;
	}
	int maxi=-1;
	char ans;
	for(int i=0;i<26;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
			ans='a'+i;
		}
	}
	cout<<"The maximum occuring character in the given string is "<<ans<<endl;
	return 0;
}
