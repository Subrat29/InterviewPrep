#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, bool> mp;
    vector<int> ans;
    for (auto &&i : arr)
    {
        if (mp.find(i) == mp.end())
        {
            ans.push_back(i);
            mp[i] = true;
        }
    }
    return ans;
}

int main()
{
    return 0;
}