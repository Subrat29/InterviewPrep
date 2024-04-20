#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time : 2^sum
// Space: sum

long long int solve(int coins[], int N, int sum, int i, vector<vector<long long int>> &dp)
{
    if (sum == 0)
        return 1;
    if (sum < 0 || i == N)
        return 0;
    if (dp[i][sum] != -1)
        return dp[i][sum];

    long long int takeThatCoin = solve(coins, N, sum - coins[i], i, dp);
    long long int skipThatCoin = solve(coins, N, sum, i + 1, dp);
    dp[i][sum] = takeThatCoin + skipThatCoin;
    return dp[i][sum];
}

long long int count(int coins[], int N, int sum)
{
    vector<vector<long long int>> dp(N + 1, vector<long long int>(sum + 1, -1));
    long long int ans = solve(coins, N, sum, 0, dp);
    return ans;
}

int main()
{
    return 0;
}