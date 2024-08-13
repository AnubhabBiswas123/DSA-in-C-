//Lecture 38
//Phone keypad problem using recursion and backtracking
#include <iostream>
#include <vector>
using namespace std;
    void solve(string digits, vector<string>& ans, string output,int index, string mapping[]){
        //Base Case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number= digits[index]-'0'; //Ek ek karke number nikalo 
        string value= mapping[number]; //Number k according jo value hai usko nikalo
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,ans,output,index+1,mapping);
            output.pop_back();
        }

    }
    
    
    
    vector<string> letterCombinations(string digits) {
        string output="";
        int index=0;
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,mapping);
        return ans;
    }
int main()
{
	string s;
	cout<<"Enter the string:";
	cin>>s;
	cout<<endl;
	vector<string> ans= letterCombinations(s);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
