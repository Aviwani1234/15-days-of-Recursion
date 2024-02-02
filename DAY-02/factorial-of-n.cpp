#include <bits/stdc++.h>
using namespace std;

/* Functional Recursion */
// int fact(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

/* Parameterized Recursion */
int ans = 1;

int fact(int n)
{
    if (n == 1)
    {
        return ans;
    }

    ans = ans * n;

    return fact(n - 1);
}

int main()
{

    int n;
    cin >> n;
    cout << fact(n);

    return 0;
}