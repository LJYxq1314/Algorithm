#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        /* 超出时间限制 */
#if 0
        stack<int> myStack;
        queue<int> myQueue;
        while (head != NULL)
        {
            myQueue.push(head->val);
            head = head->next;
        }

        while (myQueue.front() == myQueue.back() && myQueue.size() != 1)
        {
            myQueue.pop();
            while (!myQueue.empty())
            {
                myStack.push(myQueue.front());
                myQueue.pop();
            }

            myStack.pop();
            if (myStack.size() == 1 || myStack.size() == 0)
            {
                return true;
            }
            while (!myStack.empty())
            {
                myQueue.push(myStack.top());
                myStack.pop();
            }
        }
        if (myQueue.size() == 1)
        {
            return true;
        }
        return false;
#endif
#if 1
        stack<int> myStack;
        ListNode *travelNode = head;
        while (travelNode != NULL)
        {
            myStack.push(travelNode->val);
            travelNode = travelNode->next;
        }

        while (head->val == myStack.top())
        {
            myStack.pop();
            head = head->next;
            if (head == NULL)
            {
                return true;
            }
        }
        return false;
#endif
    }
};