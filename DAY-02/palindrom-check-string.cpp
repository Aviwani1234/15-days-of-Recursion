#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int s, int e, string str)
{
    if (str[s] != str[e])
    {
        return false;
    }

    if (s >= e)
    {
        return true;
    }

    return isPalindrom(s + 1, e - 1, str);

}

int main()
{
    string str = "abcba";
    bool ans = isPalindrom(0, str.length() - 1, str);
    if (ans)
    {
        cout << "Given string is Palindrom!" << endl;
    }
    else
    {
        cout << "Given string is not palindrom" << endl;
    }

    return 0;
}