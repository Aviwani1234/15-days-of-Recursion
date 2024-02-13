#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
long long solve(int i, int s, long long sum, int n)
{
    if (i > n)
    {
        return (sum) % mod;
    }

    long long product = 1;
    for (int j = 1; j <= i; j++)
    {
        product *= s;
        product = product % mod;
        s++;
    }

    sum = (sum % mod) + (product % mod);

    return solve(i + 1, s, sum, n);
}

int main()
{
    int n;
    cin >> n;
    cout << solve(1, 1, 0, n);
    return 0;
}