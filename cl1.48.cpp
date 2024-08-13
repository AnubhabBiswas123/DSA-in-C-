#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n, s, temp;
    vector<int> v;

    cout << "Enter the size of the array:" << endl;
    cin >> n;
    
    cout << "Enter the target sum:" << endl;
    cin >> s;
    
    cout << "Enter all the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    vector<vector<int>> res = pairSum(v, s);
    for (int i = 0; i < res.size(); i++) {
        cout << "[" << res[i][0] << ", " << res[i][1] << "]";
        if (i < res.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}

