#include <bits/stdc++.h>
using namespace std;

void print(int cnt) // Function
{
    if (cnt > 5) // Base Case
    {
        return;
    }

    cout << cnt << endl; // code

    print(cnt + 1); // Recursive call (Function call itself)
}

int main()
{

    int cnt = 1;
    print(cnt); // Function call

    return 0;
}