#include <iostream>
#include <vector>
#include <queue>
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

vector<int> leftView(Node *root)
{
    if (!root)
        return {};
    vector<int> ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *top = q.front();
            q.pop();

            if (i == 0)
                ans.push_back(top->data);

            if (top->left)
                q.push(top->left);
            if (top->right)
                q.push(top->right);
        }
    }
    return ans;
}

int main()
{
    return 0;
}