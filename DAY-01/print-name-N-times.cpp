#include <bits/stdc++.h>
using namespace std;

void print(int n, string name)
{
    if (n == 0)
    {
        return;
    }

    cout << name << endl;

    print(n - 1, name);
}

int main()
{
    string name = "Radha";
    int n = 11;
    print(n, name);

    return 0;
}