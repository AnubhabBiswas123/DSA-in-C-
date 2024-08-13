#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    vector<int> ans;
    int size = arr.size();
    sort(arr.begin(), arr.end());
    int count = 1, i = 0;
    while (i < size) {
        count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
            else
                break;
        }
        ans.push_back(count);
        i += count;
    }
    size = ans.size();
    sort(ans.begin(), ans.end());
    for (int i = 0; i < size - 1; i++) {
        if (ans[i] == ans[i + 1])
            return false;
    }
    return true;
}

int main() {
    int n, temp;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter all the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    cout << (uniqueOccurrences(v) ? "True" : "False") << endl;
    return 0;
}

