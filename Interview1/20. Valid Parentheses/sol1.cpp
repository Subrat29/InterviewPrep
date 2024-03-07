#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else if (!st.empty())
        {
            if (s[i] == ')' && !st.empty() && st.top() == '(')
                st.pop();
            else if (s[i] == ']' && !st.empty() && st.top() == '[')
                st.pop();
            else if (s[i] == '}' && !st.empty() && st.top() == '{')
                st.pop();
        }
        else
            return false;
    }
    return st.empty();
}

int main()
{
    return 0;
}