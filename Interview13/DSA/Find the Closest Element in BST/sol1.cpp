#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void solve(Node *root, int k, int &ans)
{
    if (!root)
        return;

    if (root->data == k)
    {
        ans = 0;
        return;
    }

    if (root->data > k)
        solve(root->left, k, ans);
    else if (root->data < k)
        solve(root->right, k, ans);

    ans = min(ans, abs(root->data - k));
}

int minDiff(Node *root, int k)
{
    int ans = INT_MAX;
    solve(root, k, ans);
    return ans;
}

int main()
{
    return 0;
}