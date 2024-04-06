// DSA Round(2 question 40 min, 50* 2 marks)
// Q-1 Open VS code and Design a stack with operations
//  1) push() which adds an element to the top of stack.
//  2) pop() which removes an element from top of stack.
//  3) findMiddle() which will return middle element of the stack.
//  4) deleteMiddle() which will delete the middle element.
//  Push and pop are standard stack operations.

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int findMiddle(stack<int> s1)
{
    int l = s1.size();
    int mid = l / 2;
    if (l / 2 == 0)
        mid -= 1;

    while (!s1.empty() && mid)
    {
        s1.pop();
        mid--;
    }
    return s1.top();
}

void deleteMiddle(stack<int> &s1)
{
    stack<int> s2;
    int middle = findMiddle(s1);
    while (!s1.empty() && s1.top() != middle)
    {
        s2.push(s1.top());
        s1.pop();
    }
    s1.pop();

    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}

int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);

    int middle = findMiddle(s1);
    cout << "Middle: " << middle << endl;

    deleteMiddle(s1);
    cout << "Print stack: " << endl;
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    return 0;
}