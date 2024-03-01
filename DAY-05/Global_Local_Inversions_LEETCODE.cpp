#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cnt1 = 0;
int cnt2 = 0;

int countLocalInversion(vector<int> nums)
{
    int n = nums.size();
    int element = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (element > nums[i])
        {
            cnt1++;
        }
        element = nums[i];
    }
    return cnt1;
}

void merge(ll *arr, int s, int e)
{
    ll mid = (s + e) / 2;

    ll len1 = mid - s + 1;
    ll len2 = e - mid;

    ll *first = new ll[len1];
    ll *second = new ll[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    int index = s, i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (first[i] <= second[j])
        {

            arr[index++] = first[i++];
        }
        else
        {
            cnt2 += len1 - i;
            arr[index++] = second[j++];
        }
    }

    while (i < len1)
    {
        arr[index++] = first[i++];
    }

    while (j < len2)
    {
        arr[index++] = second[j++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(ll *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    ll mid = (s + e) / 2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int countGlobalInversion(vector<int> nums)
{
    ll n = nums.size();
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = nums[i];
    }
    mergeSort(arr, 0, n - 1);
    return cnt2;
}

bool isIdealPermutation(vector<int> &nums)
{
    int localCount = countLocalInversion(nums);
    int globalCount = countGlobalInversion(nums);

    if (globalCount == localCount)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[i] = num;
        // cout << v[i];
    }
    cout << isIdealPermutation(v);
}
