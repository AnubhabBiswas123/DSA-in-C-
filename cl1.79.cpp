//Lecture 22
//Permutation in string
#include <iostream>
using namespace std;



bool isequal(int s1[26], int s2[26]){
        for(int i=0;i<26;i++){
            if(s1[i]!=s2[i]){
                return 0;
            }
        }
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        //s1 ko count array mai store kardiye
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        //Window size nikalo
        int windowSize=s1.length();
        int i=0;
        int count2[26]={0};
        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(isequal(count1,count2)){
            return 1;
        }
        int index;
        while(i<s2.length()){
            char newchar=s2[i];
            index=s2[i]-'a';
            count2[index]++;
            char oldchar=s2[i-windowSize];
            index=oldchar-'a';
            count2[index]--;
            if(isequal(count1,count2)){
                return 1;
            }
            i++;
        }
        return 0;
    }
    int main()
    {
    	string s1="",s2="";
    	cout<<"Enter the first string:";
    	cin>>s1;
    	cout<<"Enter the second string:";
    	cin>>s2;
    	if(checkInclusion(s1,s2))
    	{
    		cout<<"Permutation in the string is present"<<endl;
    	}
    	else
    	{
    		cout<<"Permutation in the string is not present"<<endl;
    	}
    	return 0;
    }
