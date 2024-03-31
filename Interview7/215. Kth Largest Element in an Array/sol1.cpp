#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < nums.size(); i++)
        pq.push(nums[i]);

    k = k - 1;
    while (k--)
        pq.pop();

    return pq.top();
}

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    cout << findKthLargest(nums, 2);
    return 0;
}