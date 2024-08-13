//Lecture 39
//Permutations of a string in lexicographic increasing order
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
void solve(vector<string>& ans,int index, string str)
{
    if(index>=str.length()){    //Base Case
        ans.push_back(str);
        return;
    }
    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        solve(ans,index+1,str);
        //Backtracking
        swap(str[index],str[j]);
    }
}



vector<string> generatePermutations(string &str)//reference variable
{
    // write your code here
    vector<string> ans;
    int index=0;
    solve(ans,index,str);
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
	string s;
	cout<<"Enter a string:";
	cin>>s;
	cout<<endl;
	vector<string> ans=generatePermutations(s);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
