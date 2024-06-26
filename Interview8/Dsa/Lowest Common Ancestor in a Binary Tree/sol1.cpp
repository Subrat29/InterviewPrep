#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node *lca(Node *root, int n1, int n2)
{
    if (root == nullptr)
        return nullptr;

    if (root->data == n1 || root->data == n2)
        return root;

    Node *l = lca(root->left, n1, n2);
    Node *r = lca(root->right, n1, n2);

    if (l && r)
        return root;

    if (!l)
        return r;
    else
        return l;
}

int main()
{
    return 0;
}