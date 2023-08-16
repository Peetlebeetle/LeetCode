class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwo(self, l1: [ListNode], l2: [ListNode]) -> [ListNode]:
        sum = self.listToInt(l1) + self.listToInt(l2)
        print("Sum: " + str(sum))

        if sum is 0:
            return ListNode(0)
        
        return self.intToList(sum)


    def listToInt(self, node):
        if node is None:
            return 0
        
        if node.next is None:
            return node.val
        
        val = self.listToInt(node.next) * 10 + node.val
        return val


    def intToList(self, sum) -> [ListNode]:
        if sum is 0:
            return None
        
        node = ListNode((sum % 10))
        sum //= 10
        node.next = self.intToList(sum)

        return node
