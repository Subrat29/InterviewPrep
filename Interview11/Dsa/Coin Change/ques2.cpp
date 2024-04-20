#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time : 2^sum
// Space: sum

int solve(int coins[], int N, int sum, int i)
{
    if (sum == 0)
        return 1;
    if (sum < 0 || i >= N)
        return 0;

    long long int takeThatCoin = solve(coins, N, sum - coins[i], i);
    long long int skipThatCoin = solve(coins, N, sum, i + 1);
    return takeThatCoin + skipThatCoin;
}

long long int count(int coins[], int N, int sum)
{
    return solve(coins, N, sum, 0);
}

int main()
{
    return 0;
}