//Lecture 37
//Subsequences of string
#include <iostream>
#include <vector>
using namespace std; 
void solve(vector<string>& ans, int index, string output, string str){
	if(index>=str.length()){       //Base Case
		if(output.length()>0){
			ans.push_back(output);
		}
		return;
	}
	//Exclude
	solve(ans,index+1,output,str);
	//Include
	char element=str[index];
	output.push_back(element);
	solve(ans,index+1,output,str);

}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	int index=0;
	string output="";
	solve(ans,index,output,str);
	return ans;
}
int main()
{
	string s;
	cout<<"Enter a string:";
	cin>>s;
	cout<<endl;
	vector<string> ans;
	ans=subsequences(s);
	int n=ans.size();
	for(int i=0;i<n;i++)
		cout<<ans[i]<<endl;
	return 0;
}
