#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    class Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(Node *head1, Node *head2)
{
    Node *temp = head1;
    int l1 = 0, l2 = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        l1++;
    }

    temp = head2;
    while (temp != nullptr)
    {
        temp = temp->next;
        l2++;
    }

    int diff = abs(l1 - l2);
    if (l1 > l2)
    {
        while (head1 != nullptr && diff--)
            head1 = head1->next;
    }
    else if (l2 > l1)
    {
        while (head2 != nullptr && diff--)
            head2 = head2->next;
    }

    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}

int main()
{
    return 0;
}