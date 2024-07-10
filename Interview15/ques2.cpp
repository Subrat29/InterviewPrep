#include <bits/stdc++.h>
using namespace std;

// sc:
// tc:

int solve(vector<int> v)
{
    int n = v.length();
    int s = 0;
    int e = n - 1;
    int mid = s + e / 2;

    while (s > e)
    {
        if (mid - 1 >= 0 && mid + 1 < n)
        {
            if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
                return mid;
        }
        else if()
    }
}

int main()
{
    return 0;
}