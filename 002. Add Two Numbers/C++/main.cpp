#include <iostream>
#include <cstdarg>

#include "Solution.h"
#include "ListNode.h"

using namespace std;

ListNode* makeLN(int count, ...);

int main()
{
    ListNode* l1 = makeLN(3, 2, 4, 3);
    ListNode* l2 = makeLN(3, 5, 6, 4);
    addTwo(l1, l2);
    return 0;
}

ListNode* makeLN(int count, ...)
{
    va_list args;
    va_start(args, count);

    if (count == 0)
        return nullptr;
    
    ListNode* first = new ListNode(va_arg(args, int));

    if (count > 1)
    {
        ListNode* next = first;

        for (int i = 1; i < count; i++)
        {
            ListNode* tmp = new ListNode(va_arg(args, int));
            next->next = tmp;
            next = tmp;
        }
    }

    va_end(args);
    return first;
}
