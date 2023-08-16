from ObjectAndSolution import ListNode, Solution

class Main:
    nA3 = ListNode(3)
    nA2 = ListNode(4, nA3)
    nA1 = ListNode(2, nA2)

    nB3 = ListNode(4)
    nB2 = ListNode(6, nB3)
    nB1 = ListNode(5, nB2)

    sol = Solution()
    sol.addTwo(nA1, nB1)
