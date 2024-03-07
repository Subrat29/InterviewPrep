#include <iostream>
#include <vector>

using namespace std;

void generate_permutations(int n, vector<int> &permutation, int total, vector<vector<int>> &result)
{
    if (total == n)
    {
        result.push_back(permutation);
    }
    if (total < n)
    {
        permutation.push_back(1);
        generate_permutations(n, permutation, total + 1, result);
        permutation.pop_back();

        permutation.push_back(2);
        generate_permutations(n, permutation, total + 2, result);
        permutation.pop_back();
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> permutation;
    vector<vector<int>> result;
    cout << "All permutations of 1s and 2s that sum up to " << n << ":\n";
    generate_permutations(n, permutation, 0, result);

    for (auto &&i : result)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
