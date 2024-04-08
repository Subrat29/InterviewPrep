#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> coins = {18, 20, 15, 30, 10, 14};
    // vector<int> coins = {55, 2, 11, 90, 33, 65, 32}; //Not valid for all test cases
    int left = 0, right = coins.size() - 1;
    int even = 0, odd = 0;

    for (int i = 0; i < coins.size(); i++)
    {
        if (i % 2 == 0)
            even += coins[i];
        else
            odd += coins[i];
    }

    cout << "even: " << even << endl;
    cout << "odd: " << odd << endl;

    int A_points = 0;
    int B_points = 0;

    if (even > odd)
    {
        cout << "case1" << endl;
        while (left <= right)
        {
            if (left % 2 == 0)
                A_points += coins[left++];
            else
                A_points += coins[right--];

            if (coins[left] > coins[right])
                B_points += coins[left++];
            else
                B_points += coins[right--];
        }
    }
    else
    {
        cout << "case2" << endl;
        while (left <= right)
        {
            if (left % 2 != 0)
                A_points += coins[left++];
            else
                A_points += coins[right--];

            if (coins[left] > coins[right])
                B_points += coins[left++];
            else
                B_points += coins[right--];
        }
    }

    cout << "A_points: " << A_points << endl;
    cout << "B_points: " << B_points << endl;

    if (A_points > B_points)
        cout << "Player A wins!!" << endl;
    else
        cout << "Player B wins!!" << endl;

    return 0;
}