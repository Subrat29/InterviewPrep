#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int solve(int arr[], int l, int r)
{
    int mini = INT_MAX;
    while (l <= r)
    {
        int mid = l + r / 2;
        if (arr[mid] < mini)
            mini = arr[mid];

        if (mid - 1 >= l && mid - 1 <= r && arr[mid - 1] < arr[mid])
            r = mid - 1;
        else if (mid + 1 >= l && mid + 1 <= r && arr[mid + 1] < arr[mid])
            l = mid + 1;
        else
            break;
    }
    return mini;
}

int findMin(int arr[], int n)
{
    int mid = n / 2;
    int a = solve(arr, 0, mid);
    int b = solve(arr, mid, n - 1);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return min(a, b);
}

int main()
{
    int n = 3;
    int arr[n] = {4, 5, 1, 3};
    cout << "mini: " << findMin(arr, n);
    return 0;
}