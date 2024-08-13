//Lecture 23
//Search in a 2D array level 2
#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int column=matrix[0].size();
        int rowindex=0;
        int colindex=column-1;
        while(rowindex<row && colindex>=0){
            if(matrix[rowindex][colindex]==target)
                return 1;
            else if(matrix[rowindex][colindex]<target)
                rowindex++;
            else if(matrix[rowindex][colindex]>target)
                colindex--;
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
