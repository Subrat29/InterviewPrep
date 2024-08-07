#include <bits/stdc++.h>
using namespace std;

// sc:
// tc:

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *ans = NULL;

int solve(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
        return 0;
    int finalans = 0;
    if (root == p || root == q)
        // finalans = 1;
        finalans = 0;
    int left = solve(root->left, p, q);
    int right = solve(root->right, p, q);
    // if ((left + right + finalans) == 2 )
    if ((left + right + finalans) == 2 && !ans)
        ans = root;
    return left + right + finalans;
}

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    solve(root, p, q);
    return ans;
}

int main()
{
    return 0;
}