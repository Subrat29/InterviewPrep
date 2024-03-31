#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return i;
        else if (nums[i] > target)
            return i;
    }
    return nums.size();
}

int main()
{
    return 0;
}