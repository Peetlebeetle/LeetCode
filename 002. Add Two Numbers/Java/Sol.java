import java.util.LinkedList;

public class Sol {
    // Recursive solution using LinkedList Library

    public LinkedList<Integer> addTwo(LinkedList<Integer> l1, LinkedList<Integer> l2)
    {
        int l1int = listToInt(l1, 0);
        int l2int = listToInt(l2, 0);

        LinkedList<Integer> result = new LinkedList<Integer>();
        return intToList(result, (l1int + l2int));
    }

    private int listToInt(LinkedList<Integer> list, int ans)
    {
        if (!list.isEmpty())
        {
            ans *= 10;
            ans += list.getLast();
            list.removeLast();

            ans = listToInt(list, ans);
        }
        
        return ans;
    }

    private LinkedList<Integer> intToList(LinkedList<Integer> list, int ans)
    {
        if (ans > 0)
        {
            int unit = ans % 10;
            list.addLast(unit);
            ans *= 0.1;
            list = intToList(list, ans);
        }

        return list;
    }
}
