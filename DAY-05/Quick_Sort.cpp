#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivote = arr[s];

    int cnt = 0;
    for (int i = s; i <= e; i++)
    {
        if (pivote > arr[i])
        {
            cnt++;
        }
    }

    swap(arr[s], arr[s + cnt]);

    int i = s, j = e;
    while (i < s + cnt && j > s + cnt)
    {
        while (arr[i] < pivote && i < s + cnt)
        {
            i++;
        }

        while (arr[j] >= pivote && j > s + cnt)
        {
            j--;
        }

        swap(arr[i], arr[j]);
    }

    return s + cnt;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);

    quickSort(arr, p + 1, e);
}

int main()
{
    int n = 5;
    int arr[5] = {2, 1, 4, 3, 5};
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}