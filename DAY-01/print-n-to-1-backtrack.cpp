#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 5)
    {
        return;
    }

    print(n + 1);
    cout << n << endl;
}

int main()
{

    int n = 1;
    print(n);

    return 0;
}