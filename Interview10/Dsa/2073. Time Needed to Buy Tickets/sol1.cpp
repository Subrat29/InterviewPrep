#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int timeRequiredToBuy(vector<int> &nums, int k)
{
    int res = 0;
    for (int i = 0; i <= k; i++)
    {
        res += min(nums[i], nums[k]);
    }
    for (int i = k + 1; i < nums.size(); i++)
    {
        res += min(nums[i], nums[k] - 1);
    }
    return res;
}

int main()
{
    return 0;
}