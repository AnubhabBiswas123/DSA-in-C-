//Lecture 23
//Searching in 2D array level 1
#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;
        int e=row*col-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(matrix[mid/col][mid%col]==target){
                return 1;
            }
            else if(matrix[mid/col][mid%col]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return 0;
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
    	int target;
    	cout<<"\nEnter the element you want to search:";
    	cin>>target;
    	if(searchMatrix(arr,target))
    	{
    		cout<<"Element found"<<endl;
    	}
    	else
    	{
    		cout<<"Element not found"<<endl;
    	}
    	
    	return 0;
    }
