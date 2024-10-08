#include <bits/stdc++.h>
using namespace std;

// sc: n - no of nodes
// tc: n / t

void solve(TreeNode *root, int low, int high, int &sum)
{
    if (!root)
        return;

    if (root->val >= low && root->val <= high)
        sum += root->val;

    if (root->val <= low)
    solve(root->right, low, high, sum);
    else
    solve(root->left, low, high, sum);

    if (root->val >= high)
    solve(root->left, low, high, sum);
    else
    solve(root->right, low, high, sum);
}

int rangeSumBST(TreeNode *root, int low, int high)
{
    int sum = 0;
    solve(root, low, high, sum);
    return sum;
}

int main()
{
    return 0;
}