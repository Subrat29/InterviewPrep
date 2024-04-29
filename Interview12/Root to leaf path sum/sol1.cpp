#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

bool solve(Node *root, int s, int &totalSum)
{
    if (!root)
        return false;
    if (totalSum + root->data > s)
        return false;
    totalSum += root->data;
    
    if (!root->left && !root->right && totalSum == s)
        return true;

    bool left = solve(root->left, s, totalSum);
    bool right = solve(root->right, s, totalSum);
    totalSum -= root->data;
    return left || right;
}

bool hasPathSum(Node *root, int s)
{
    int totalSum = 0;
    return solve(root, s, totalSum);
}

int main()
{
    return 0;
}