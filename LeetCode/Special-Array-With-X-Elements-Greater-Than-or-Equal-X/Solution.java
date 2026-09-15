1class Solution {
2
3    int check(int[] nums, int k) {
4        int counter = 0;
5        for (int i : nums) {
6            if (i >= k) {
7                counter++;
8            }
9
10        }
11        return counter;
12    }
13
14    public int specialArray(int[] nums) {
15
16        int low = 1;
17        int high = nums.length;
18
19        while (low <= high) {
20            int mid = low + (high - low) / 2;
21
22            int temp = check(nums, mid);
23
24            if (temp == mid) {
25                return mid;
26            } else if (temp > mid) {
27                low = mid + 1;
28            } else {
29                high = mid - 1;
30            }
31
32        }
33
34        return -1;
35
36    }
37}