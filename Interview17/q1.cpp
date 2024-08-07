#include <bits/stdc++.h>
using namespace std;

// sc: n*n-1/2;
// tc: n*n-1/2;

vector<vector<int>> solve(int n)
{
    vector<vector<int>> ans;
    ans.push_back({1});

    for (int i = 2; i <= n; i++)
    {
        vector<int> temp;
        for (int j = 0; j <= i - 1; j++)
        {
            if (j == 0)
            {
                temp.push_back(1);
            }
            else
            {
                int x = ans[i - 2][j] + ans[i - 2][j + 1];
                temp.push_back(x);
            }
        }
        temp.push_back(1);
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    return 0;
}