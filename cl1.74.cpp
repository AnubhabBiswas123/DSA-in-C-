#include <iostream>
#include <string>
using namespace std;

class Solution {
    
    bool isvalid(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }
        return false; 
    }
    
    char tolower(char ch)
    {
        if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
        {
            return ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'A' + 'a';
            return ch;
        }
        return ch;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(isvalid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        for(int i = 0; i < temp.length(); i++)
        {
            temp[i] = tolower(temp[i]);
        }

        int st = 0, e = temp.length() - 1;
        while(st <= e)
        {
            if(temp[st] != temp[e])
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};

int main()
{
    string s;
    Solution sol;
    cout << "Enter a string: ";
    getline(cin, s); // Use getline to include spaces in the input string
    if(sol.isPalindrome(s))
    {
        cout << "This is a valid palindrome" << endl;
    }
    else
    {
        cout << "This is not a valid palindrome" << endl;
    }
    return 0;
}

