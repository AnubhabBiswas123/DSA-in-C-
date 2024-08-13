//lecture 23
//Spiral problem
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> ans;
        int sr=0;
        int sc=0;
        int er=row-1;
        int ec=col-1;
        int total=row*col;
        int count=0;
        while(count<total){
            for(int index=sc;count<total && index<=ec;index++){
                ans.push_back(matrix[sr][index]);
                count++;
            }
            sr++;
             for(int index=sr;count<total && index<=er;index++){
                ans.push_back(matrix[index][ec]);
                count++;
            }
            ec--;
             for(int index=ec;count<total && index>=sc;index--){
                ans.push_back(matrix[er][index]);
                count++;
            }
            er--;
             for(int index=er;count<total && index>=sr;index--){
                ans.push_back(matrix[index][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
    int main()
    {
    	int row,col;
    	cout<<"Enter the no. of rows:";
    	cin>>row;
    	cout<<endl;
    	cout<<"Enter the no. of columns:";
    	cin>>col;
    	cout<<endl;
    	vector<vector<int>> arr(row,vector<int>(col));
    	cout<<"Enter all the elements of the 2D array:";
    	for(int i=0;i<row;i++)
    	{
    		for(int j=0;j<col;j++)
    		{
    			cin>>arr[i][j];
    		}
    	}
    	vector<int> v=spiralOrder(arr);
    	for(int val: v)
    	{
    		cout<<val<<" ";
    	}
    	cout<<endl;
    	return 0;
    }
