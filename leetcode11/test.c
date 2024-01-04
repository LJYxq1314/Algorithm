#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *mergeList = (struct ListNode *)malloc(sizeof(struct ListNode));
    memset(mergeList, 0, sizeof(struct ListNode));
    struct ListNode *travelNode = mergeList;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            travelNode->next = list1;
            travelNode = travelNode->next;
            list1 = list1->next;
        }
        else
        {
            travelNode->next = list2;
            travelNode = travelNode->next;
            list2 = list2->next;
        }
    }

    if(list1 == NULL)
    {   
        travelNode->next = list2;

    }

    if(list2 == NULL)
    {
        travelNode->next = list1;
    }

    return mergeList->next;
}

