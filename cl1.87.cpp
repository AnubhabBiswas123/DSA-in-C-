//Lecture 23
//Waveprint problem

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    // Write your code here
    vector<int> v;
    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            // Odd column no.
            for (int row = nRows - 1; row >= 0; row--) {
                v.push_back(arr[row][col]);
            }
        } else {
            // Even column no.
            for (int row = 0; row < nRows; row++) {
                v.push_back(arr[row][col]);
            }
        }
    }
    return v;
}

int main() {
    int row, col;
    cout << "Enter the total no. of rows of the 2D array: ";
    cin >> row;
    cout << endl;
    cout << "Enter the total no. of columns of the 2D array: ";
    cin >> col;
    cout << endl;
    cout << "Enter all the elements of the 2D array:" << endl;
    
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    
    vector<int> result = wavePrint(arr, row, col);
    cout << "The waveprint is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}

	
	
	
	
