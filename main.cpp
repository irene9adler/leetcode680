#include <iostream>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
    int len = s.length();
    cout << "len:";
    cout << len;
    cout << "\n";
    static int del = 0;
    if(len <= 2) return true;
    int i = 0,j = len - 1;
    while((i <= len) &&(j >= 0) && (i < j))
    {
       /* cout << "s[i] : ";
        cout << s[i];
        cout << "\n";

        cout << "s[j] : ";
        cout << s[j];
        cout << "\n";

        cout << "s[i++] : ";
        cout << s[++i];
        cout << "\n";

        cout << "s[j++] : ";
        cout << s[--j];
        cout << "\n";*/

        if(s[i] == s[j])
        {
            i++;
            j--;
        }
        else if(s[i] == s[--j])
        {
            cout << "1!";
            del +=1;
            if(del >= 2)
                return false;
           // j++;

        }
        else if(s[++i] == s[j])
        {
            cout << "2!";
            del +=1;
            if(del >= 2)
                return false;
            //i++;
        }
        else return false;

    }
    return true;
    }
};
int main()
{
    Solution solve;
    string str = "deeee";
    bool res = solve.validPalindrome(str);
    cout << "res:";
    cout << res;
    return 0;
}

