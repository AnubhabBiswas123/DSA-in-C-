#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int i = 0;
    int n = chars.size();
    int ansIndex = 0;
    int j, count = 0;
    while (i < n) {
        j = i + 1;
        while (j < n && chars[i] == chars[j]) {
            j++;
        }
        // yaha aa rhe ho matlab
        // yato pura array traverse hogya hai
        // ya phir dusra element aa gya hai
        count = j - i;
        chars[ansIndex++] = chars[i];
        if (count > 1) {
            string countStr = to_string(count);
            for (char ch : countStr) {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main() {
    int n;
    char temp;
    vector<char> arr;
    cout << "Enter the size of the character array: ";
    cin >> n;
    cout << "Enter the character array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    int newLength = compress(arr);
    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}

