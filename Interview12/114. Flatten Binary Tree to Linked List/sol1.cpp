#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void solve(TreeNode *root, vector<TreeNode *> &v)
{
    if (!root)
        return;

    v.push_back(root);
    solve(root->left, v);
    solve(root->right, v);
}

void flatten(TreeNode *root)
{
    vector<TreeNode *> v;
    solve(root, v);

    TreeNode *newTree = new TreeNode(-1);
    TreeNode *temp = newTree;

    for (int i = 0; i < v.size(); i++)
    {
        temp->right = v[i];
        temp->left = nullptr;
        temp = temp->right;
    }
    root = newTree->right;
}

int main()
{
    return 0;
}