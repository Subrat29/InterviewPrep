#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
    long long total = 0;
    for (int i = 0; i < n; i++)
        total += a[i];

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (total == sum)
            return i + 1;
        total -= a[i];
    }
    return -1;
}

int main()
{
    return 0;
}