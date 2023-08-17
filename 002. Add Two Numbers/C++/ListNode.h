#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode
{
    public:
        int val;
        ListNode* next;

        ListNode(int value)
        {
            val = value;
            next = nullptr;
        }
};

#endif