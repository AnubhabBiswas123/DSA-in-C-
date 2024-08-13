#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>>& ans, vector<int> output, vector<int> nums, int index) {
    if (index >= nums.size()) { // Base Case
        ans.push_back(output);
        return;
    }
    // Exclude
    solve(ans, output, nums, index + 1);
    // Include
    output.push_back(nums[index]);
    solve(ans, output, nums, index + 1);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(ans, output, nums, index);
    return ans;
}

int main() {
    int n, temp;
    vector<int> arr;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter all the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    vector<vector<int>> ans = subsets(arr);

    // Print the subsets
    for (const auto& subset : ans) {
        for (const auto& num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

