#include <bits/stdc++.h>
using namespace std;

// sc:
// tc:

int solve(vector<int> nums)
{
    int n = nums.size();
    int s = 0;
    int e = nums.size() - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        cout << "hii";
        if (mid + 1 < n && nums[mid] > nums[mid + 1])
        {
            return mid;
        }

        if (mid == n - 1)
            return mid;

        if (mid == 0)
            return mid;

        else if (mid + 1 < n && nums[mid] < nums[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    // 7, 5, 5, 6, 8
    // 5, 5, 5, 6, 7, 5
    vector<int> nums = {7, 5, 5, 6, 5};
    cout << solve(nums);
    return 0;
}