#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
    long long l = 0;
    long long r = n - 1;
    long long left = a[l];
    long long right = a[r];

    if (n == 1)
        return 1;

    if (n == 2)
    {
        if (left == 0)
            return r + 1;
        else
            return l + 1;
    }

    while (l < r)
    {
        if (left == right && abs(l - r) == 2)
            return l + 2;
        else if (left < right)
            left += a[++l];
        else
            right += a[--r];
    }
    return -1;
}

int main()
{
    return 0;
}