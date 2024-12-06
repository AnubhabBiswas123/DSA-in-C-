#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;
    // Function to calculate the maximum area of a rectangle
    // in the given matrix.
    vector<int> nextsmallerelement(vector<int> arr, int m)
    {
        vector<int> ans(m);
        stack<int> st;
        st.push(-1);
        int temp;
        for(int i=m-1;i>=0;i--)
        {
            temp=arr[i];
            while(st.top()!=-1 && arr[st.top()]>=temp)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> previoussmallerelement(vector<int> arr, int m)
    {
        vector<int> ans(m);
        stack<int> st;
        st.push(-1);
        int temp;
        for(int i=0;i<m;i++)
        {
            temp=arr[i];
            while(st.top()!=-1 && arr[st.top()]>=temp)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    int largestarea(vector<int> arr,int m)
    {
        vector<int> next(m);
        vector<int> prev(m);
        next=nextsmallerelement(arr,m);
        prev=previoussmallerelement(arr,m);
        int area=INT_MIN, newarea;
        for(int i=0;i<m;i++)
        {
            int l=arr[i];
            if(next[i]==-1)
                next[i]=m;
            int b=next[i]-prev[i]-1;
            newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
    int maxArea(vector<vector<int>> &mat) {
        // Your code here
        int n=mat.size();
        int m=mat[0].size();
        int area,newarea;
        area=largestarea(mat[0],m);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)    //plus karne k liye
            {
                if(mat[i][j]!=0)
                {
                    mat[i][j]=mat[i][j]+mat[i-1][j];
                }
                else
                    mat[i][j]=0;
            }
            newarea=largestarea(mat[i],m);
            area=max(area,newarea);
        }
        return area;
    }

int main() {
    int rows,columns;
    cout<<"Enter the rows and columns of the vector:";
    cin>>rows>>columns;
    cout<<endl;
    vector<vector<int>> mat(rows,vector<int>(columns));
    for(int i=0;i<rows;i++)
    {
    	for(int j=0;j<columns;j++)
    	{
    		cin>>mat[i][j];
    	}
    }
    int area=maxArea(mat);
    cout<<"The max rectangle in the binary matrix with all 1's: "<<area<<endl;
    return 0;
 }
