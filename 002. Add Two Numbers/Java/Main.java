import java.util.LinkedList;

public class Main
{
    public static void main(String[] args)
    {
        LinkedList<Integer> l1 = makeList(2, 4, 3);
        LinkedList<Integer> l2 = makeList(5, 6, 4);
        ListNode n1 = makeLN(2, 4, 3);
        ListNode n2 = makeLN(5, 6, 4);

        Sol sol1 = new Sol();
        System.out.println("LinkedList Result: " + sol1.addTwo(l1, l2));

        Sol2 sol2 = new Sol2();
        lnPrint(sol2.addTwo(n1, n2));
    }


    private static ListNode makeLN(int... a)
    {
        ListNode[] arr = new ListNode[a.length];

        arr[0] = new ListNode(a[0]);

        for (int i = 1; i < a.length; i++)
        {
            arr[i] = new ListNode(a[i]);
            arr[i - 1].next = arr[i];
        }

        return arr[0];
    }

    private static LinkedList<Integer> makeList(int... a)
    {
        LinkedList<Integer> list = new LinkedList<Integer>();
        
        for (int i : a)
            list.add(i);
        
        return list;
    }

    private static void lnPrint(ListNode node)
    {
        System.out.print("ListNode Result: [");
        while (node.next != null)
        {
            System.out.print(node.val + ", ");
            node = node.next;
        }
        System.out.println(node.val + "]");
    }
}