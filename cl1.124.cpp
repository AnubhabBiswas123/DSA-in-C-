//Lecture 40
//Rat in a maze question
//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function template for C++


  bool isSafe(int newx,int newy,vector<vector<int>> &mat,int n,vector<vector<int>> visited){
        if(newx>=0 && newx<n && newy>=0 && newy<n && visited[newx][newy]==0 && mat[newx][newy]==1)
            return true;
        else
            return false;
  }    
    
    
  void solve(vector<vector<int>> &mat,vector<string>& ans, vector<vector<int>> visited,string path,int x,int y,int n){
        
        //Humlog x and y tak pohoch gye hai
        if(x==n-1 && y==n-1){   //Base case
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        //Down
        int newx=x+1;
        int newy=y;
        if(isSafe(newx,newy,mat,n,visited)){
            path.push_back('D');
            solve(mat,ans,visited,path,newx,newy,n);
            path.pop_back();
        }
        //Left
        newx=x;
        newy=y-1;
        if(isSafe(newx,newy,mat,n,visited)){
            path.push_back('L');
            solve(mat,ans,visited,path,newx,newy,n);
            path.pop_back();
        }
        //Right
        newx=x;
        newy=y+1;
        if(isSafe(newx,newy,mat,n,visited)){
            path.push_back('R');
            solve(mat,ans,visited,path,newx,newy,n);
            path.pop_back();
        }
        //Up
        newx=x-1;
        newy=y;
        if(isSafe(newx,newy,mat,n,visited)){
            path.push_back('U');
            solve(mat,ans,visited,path,newx,newy,n);
            path.pop_back();
        }
        visited[x][y]=0;
        
  }
 
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        if(mat[0][0]==0)
            return ans;
        int n=mat.size();
         vector<vector<int>> visited(n, vector<int>(n, 0));
        string path="";
        int srcx=0;
        int srcy=0;
        solve(mat,ans,visited,path,srcx,srcy,n);
        return ans;
    }



//{ Driver Code Starts.

int main() {
    int n;
    cout<<"Enter the size of the square matrix:";
    cin>>n;
    cout<<endl;
    vector<vector<int>> arr(n, vector<int>(n, 0));;
    cout<<"Enter all the elements of the matrix:";
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>arr[i][j];
    	}
    }
    vector<string> ans=findPath(arr);
    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}    

// } Driver Code Ends

