#include <bits/stdc++.h>
using namespace std;

// sc: 1
// tc: nlogn

// By using floy'd tortoise and hare algorithm or slow fast algo

int square(int n)
{
    int num = 0;
    while (n)
    {
        int rem = n % 10;
        num += rem * rem;
        n = n / 10;
    }
    return num;
}

bool isHappy(int n)
{
    int slow = n;
    int fast = n;

    do
    {
        slow = square(slow);
        fast = square(fast);
        fast = square(fast);
    } while (slow != fast);

    return slow == 1;
}

int main()
{
    return 0;
}