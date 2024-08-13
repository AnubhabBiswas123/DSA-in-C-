//Lecture 23
//Rotate matrix by 90 degrees
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Transpose the matrix
    for(int i = 0; i < n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    int n;
    
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;
    
    vector<vector<int>> ans(n, vector<int>(n));
    cout << "\nEnter the values of the 2D vector:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> ans[i][j];
        }
    }
    
    rotate(ans);
    
    cout << "\nThe vector after rotating by 90 degrees clockwise:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

