#include <bits/stdc++.h>
using namespace std;

void solve(int index, int target, vector<int> &temp, vector<int> &candidates, vector<vector<int>> &result)
{
    if (index == candidates.size())
    {
        if (target == 0)
        {
            result.push_back(temp);
        }
        return;
    }

    if (candidates[index] <= target)
    {
        temp.push_back(candidates[index]);
        solve(index, target - candidates[index], temp, candidates, result);
        temp.pop_back();
    }

    solve(index + 1, target, temp, candidates, result);
}

int main()
{
    vector<int> candidates({2, 3, 6, 7});
    int target = 7;
    vector<vector<int>> result;
    vector<int> temp;

    solve(0, target, temp, candidates, result);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}