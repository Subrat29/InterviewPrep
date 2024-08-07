#include <bits/stdc++.h>
using namespace std;

// sc:
// tc:

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *sortList(ListNode *head)
{
    vector<int> arr;

    // Travese and store
    ListNode *temp = head;
    while (temp)
    {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    // sort array
    sort(arr.begin(), arr.end());

    // processing
    temp = head;
    for (int i = 0; i < arr.size(); i++)
    {
        temp->val = arr[i];
        temp = temp->next;
    }
    return head;
}

int main()
{
    return 0;
}