#include <bits/stdc++.h>
using namespace std;

bool solve(int index, vector<int> &ans, int sum, int &k, int arr[], int n)
{
    if (index == n)
    {
       
        if (sum == k)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            return true;
        }
        return false;
    }

    ans.push_back(arr[index]);
    sum += arr[index];
    if(solve(index + 1, ans, sum, k, arr, n)==true){
        return true;
    }
    
    ans.pop_back();
    sum-=arr[index];

    if(solve(index + 1, ans, sum,k, arr, n)==true){
        return true;
    }
    
    return false;
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