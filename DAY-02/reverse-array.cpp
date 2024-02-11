#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int i, int j)
{
    if (i > j)
    {
        return;
    }

    swap(arr[i], arr[j]);

    reverseArray(arr, i + 1, j - 1);
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}