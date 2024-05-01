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

int solve(Node *root, int k)
{
    if (!root)
        return INT_MAX;

    if (root->data == k)
        return 0;

    if (root->data > k)
        return min(abs(root->data - k), solve(root->left, k));

    return min(abs(root->data - k), solve(root->right, k));
}

int minDiff(Node *root, int k)
{
    return solve(root, k);
}

int main()
{
    return 0;
}