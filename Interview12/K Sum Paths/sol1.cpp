#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

void solve(Node *root, int k, vector<int> path, int &cnt)
{
    if (!root)
        return;

    path.push_back(root->data);

    solve(root->left, k, path, cnt);
    solve(root->right, k, path, cnt);

    int sum = 0;
    for (int i = path.size() - 1; i >= 0; i--)
    {
        sum += path[i];
        if (sum == k)
            cnt++;
    }
    path.pop_back();
}

int sumK(Node *root, int k)
{
    vector<int> path;
    int cnt = 0;
    solve(root, k, path, cnt);
    return cnt;
}

int main()
{
    return 0;
}