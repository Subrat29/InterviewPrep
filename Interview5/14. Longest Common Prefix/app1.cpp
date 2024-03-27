#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string op = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        string s1 = strs[i];
        string ans = "";
        for (int j = 0; j < s1.length() && j < op.length(); j++)
        {
            if (op[j] != s1[j])
                break;
            ans += op[j];
        }
        op = ans;
    }
    return op;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Ans: " << longestCommonPrefix(strs);
    return 0;
}