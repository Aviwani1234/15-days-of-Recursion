#include <bits/stdc++.h>
using namespace std;

/* Parameterized Recursion */
// int res = 0;

// int sum(int n){

//     if(n==0)
//     {
//         return res;
//     }

//     res += n;

//     return sum(n-1);
// }

/* Functional Recursion */
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{

    int n = 5;
    cout << sum(n);

    return 0;
}