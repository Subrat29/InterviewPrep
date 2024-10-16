#include <bits/stdc++.h>
using namespace std;

// tc: nlogn + n
// sc: 1

long long solve(vector<vector<int>> intervals)
{
    // step1: sort the intervals
    sort(intervals.begin(), intervals.end());

    long long cnt = 1;
    int start = 0;
    int end = 0;

    // step2: If the current interval start range is less than end then inc the cnt else go for another answer
    for (auto &&interval : intervals)
    {
        if (interval[0] < end)
            cnt++;
        else
        {
            start = interval[0];
            end = interval[1];
            cnt = 1;
        }
    }
    return cnt;
}

int main()
{
    // vector<vector<int>> intervals = {{1, 2}, {3, 4}, {3, 5}, {3, 6}};
    vector<vector<int>> intervals = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << "Ans: " << solve(intervals);
    return 0;
}