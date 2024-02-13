#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int> &ans, int sum, int &k, int arr[], int n)
{
    if (index == n)
    {
       
        if (sum == k)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ans.push_back(arr[index]);
    sum += arr[index];
    solve(index + 1, ans, sum, k, arr, n);
    
    ans.pop_back();
    sum-=arr[index];

    solve(index + 1, ans, sum,k, arr, n);

}

int main()
{
    int k = 2;
    int n = 3;
    int arr[] = {1, 2, 1};
    vector<int> ans;
    solve(0, ans, 0, k, arr, n);

    return 0;
}