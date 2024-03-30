#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = n - 1; i >= 0; i--)
        nums1[i + m] = nums2[i];

    sort(nums1.begin(), nums1.end());
}

int main()
{
    return 0;
}