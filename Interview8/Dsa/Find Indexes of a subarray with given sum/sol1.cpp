#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    int left = 0, right = 0;
    long long sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > s)
        {
            right = i;
            while (sum > s && left < right)
                sum -= arr[left++];

            if (sum == s)
                return {left + 1, right + 1};
        }
    }
    return {-1};
}

int main()
{
    int n = 10;
    int s = 15;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ans = subarraySum(arr, n, s);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}