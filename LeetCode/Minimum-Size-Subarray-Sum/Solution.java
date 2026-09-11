1class Solution {
2    public int minSubArrayLen(int target, int[] nums) {
3
4        int ans = Integer.MAX_VALUE;
5        int low = 0;
6        int sum = 0;
7
8        for (int high = 0; high < nums.length; high++) {
9            sum += nums[high];
10
11            while (sum >= target) {
12                ans = Math.min(ans, high - low + 1);
13                sum -= nums[low];
14                low++;
15
16            }
17
18        }
19        return ans==Integer.MAX_VALUE?0:ans;
20
21    }
22}