#include <bits/stdc++.h>
using namespace std;

int solve(int index, int sum, int &k, int arr[], int n)
{
    if (index == n)
    {
        if (sum == k)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    sum += arr[index];
    int inc = solve(index + 1, sum, k, arr, n);

    sum -= arr[index];
    
    int exc = solve(index + 1, sum, k, arr, n);

    return inc + exc;
}

int main()
{
    int k = 2;
    int n = 3;
    int arr[] = {1, 2, 1};
    cout << solve(0, 0, k, arr, n);

    return 0;
}