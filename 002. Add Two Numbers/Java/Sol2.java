public class Sol2 {
    // recusively generates an integer from the received ListNode
    // recursively build a ListNode structure from the sum calculated

    public ListNode addTwo(ListNode l1, ListNode l2)
    {
        int l1nt = listToInt(l1);
        int l2nt = listToInt(l2);

        int sum = l1nt + l2nt;

        if (sum == 0)
            return new ListNode(0);
        else
            return makeLN(sum);
    }

    private int listToInt(ListNode node)
    {
        int result = node.val;

        if (node.next != null)
        {
            result = listToInt(node.next) * 10;
            result += node.val;
        }

        return result;
    }

    private ListNode makeLN(int sum)
    {
        ListNode node = new ListNode(sum % 10);
        sum /= 10;
        
        if (sum > 0)
            node.next = makeLN(sum);
        
        return node;
    }
}
