#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(string s)
{
    int i = -1;
    for (auto &it : s)
    {
        if (it == '(' || it == '{' || it == '[')
        {
            s[++i] = it;
        }
        else
        {
            if (i >= 0 && ((s[i] == '(' && it == ')') || (s[i] == '{' && it == '}') || (s[i] == '[' && it == ']')))
                i--;
            else
                return false;
        }
    }
    if (i == -1)
        return true;
    return false;
}

int main()
{
    return 0;
}