#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinUtil(int arr[], int low, int high)
{
    // Handle the case where the array is not rotated
    if (arr[low] < arr[high])
    {
        return arr[low];
    }

    // Handle the case where the array is rotated by only one element
    if (high == low + 1 && arr[low] > arr[high])
    {
        return arr[high];
    }

    int mid = low + (high - low) / 2;

    // Check if the mid element is the minimum element
    if (mid > low && arr[mid] < arr[mid - 1])
    {
        return arr[mid];
    }

    if (mid < high && arr[mid] > arr[mid + 1])
    {
        return arr[mid + 1];
    }

    if (arr[high] > arr[mid])
    {
        return findMinUtil(arr, low, mid - 1);
    }

    return findMinUtil(arr, mid + 1, high);
}

int findMin(int arr[], int n)
{
    return findMinUtil(arr, 0, n - 1);
}

int main()
{
    return 0;
}