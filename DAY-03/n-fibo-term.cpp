// Multiple Recursion Calls

#include <bits/stdc++.h>
using namespace std;

int fibonacciTerm(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int last = fibonacciTerm(n - 1);    // 1st Recursion call
    int secLast = fibonacciTerm(n - 2); // 2nd Recursion call

    return last + secLast;
}

int main()
{

    int n = 4;
    cout << fibonacciTerm(n) << endl;

    return 0;
}