#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, bool> mp;
    for (auto &&i : arr)
    {
        mp[i] = true;
    }

    vector<int> ans;
    for (auto &&i : arr)
    {
        if (mp[i] == true)
        {
            ans.push_back(i);
            mp[i] = false;
        }
    }
    return ans;
}

int main()
{
    return 0;
}