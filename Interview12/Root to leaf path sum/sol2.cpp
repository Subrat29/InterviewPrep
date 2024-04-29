#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

bool solve(Node *root, int s)
{
    if (!root)
        return false;
    if (s < 0)
        return false;
        
    s -= root->data;
    if (!root->left && !root->right && s == 0)
        return true;

    bool left = solve(root->left, s);
    bool right = solve(root->right, s);
    s += root->data;
    return left || right;
}

bool hasPathSum(Node *root, int s)
{
    return solve(root, s);
}

int main()
{
    return 0;
}