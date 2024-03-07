#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Gives tle on 31/45, have to use dp

int climbStairs(int n)
{
    if (n == 1 || n == 2)
        return n;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    return 0;
}