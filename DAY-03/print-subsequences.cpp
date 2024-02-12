#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int index, vector<int> &ans, int n, int *arr)
{
    if (index == 3)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        if (ans.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    ans.push_back(arr[index]);
    printSubsequences(index + 1, ans, n, arr);
    ans.pop_back();

    printSubsequences(index + 1, ans, n, arr);
}

int main()
{

    int n = 3;
    int arr[3] = {3, 1, 2};
    vector<int> ans;
    printSubsequences(0, ans, n, arr);

    return 0;
}