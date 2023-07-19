public class Solution {
    public static int[] twoSum(int[] nums, int target) {

        int[] arr = new int[2];
        boolean found = false;

        int i = 0;
        while (!found && i < nums.length - 1) {
            for (int j = i + 1; j < nums.length && !found; j++) {
                if (nums[i] + nums[j] == target) {
                    arr[0] = i;
                    arr[1] = j;
                    found = true;
                }
            }

            i++;
        }

        return arr;
    }

    public static void main(String[] args) {
        int[] arr = {2, 7, 11, 15};
        int target = arr[2] + arr[3];

        int[] res = twoSum(arr, target);
        System.out.println(res[0] + ", " + res[1]);
    }
}