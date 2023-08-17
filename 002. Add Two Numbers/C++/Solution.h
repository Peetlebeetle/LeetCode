#include <iostream>
#include "ListNode.h"

using namespace std;

unsigned long int listToInt(ListNode* node);
ListNode* intToList(unsigned long int sum);
void traverseNodes(ListNode* node);

ListNode* addTwo(ListNode* l1, ListNode* l2)
{
    unsigned long int n1 = listToInt(l1);
    unsigned long int n2 = listToInt(l2);
    unsigned long int sum = n1 + n2;
    cout << n1 << " + " << n2 << " = " << sum << endl;

    if (sum == 0)
        return new ListNode(0);

    return intToList(sum);
}

unsigned long int listToInt(ListNode* node)
{
    if (!node)
        return 0;
    
    if (!node->next)
        return node->val;
    
    return static_cast<unsigned long int>(listToInt(node->next) * 10 + node->val);
}

ListNode* intToList(unsigned long int sum)
{
    if (sum == 0)
        return nullptr;
    
    ListNode* node = new ListNode(sum % 10);
    sum *= 0.1;
    node->next = intToList(sum);

    return node;
}

void traverseNodes(ListNode* node)
{
    int i = 1;

    while (node->next)
    {
        cout << i << " : " << node->val << endl;
        i++;
        node = node->next;
    }
    cout << i << " : " << node->val << endl;
}