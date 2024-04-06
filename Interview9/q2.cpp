// Q2. Check if a string is a valid shuffle of two distinct strings
// abaabaabcc
// babaaaaccb
// time complexity: o(n)
// space complexity O(26)

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    // string s1 = "abaabaabcc";
    // string s2 = "babaaaaccb";
    // string s1 = "ababcabc";
    // string s2 = "abcabccb";
    string s1 = "";
    string s2 = "a";

    unordered_map<char, int> mp;
    for (auto &&i : s1)
        mp[i]++;

    for (auto &&j : s2)
        mp[j]--;

    bool ans = true;
    for (auto &&i : mp)
    {
        if (i.second != 0)
        {
            ans = false;
            break;
        }
    }

    cout << "Ans : " << ans;
    return 0;
}
