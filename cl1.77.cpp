//lecture 22
//Remove all the occurences of a substring
#include <iostream>
#include <string>
using namespace std;
string removeOccurrences(string s, string part) {
        while(s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
int main()
{
	string s="",t="";
	cout<< "Enter the string";
	getline(cin,s);
	cout<< "Enter the substring";
	getline(cin,t);
	cout<<"The string after removing the occurences:"<<removeOccurrences(s,t)<<endl;
	return 0;
}

