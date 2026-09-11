1class Solution {
2    public double findMaxAverage(int[] nums, int k) {
3
4        double ans = Double.NEGATIVE_INFINITY;
5        int low = 0;
6        long sum = 0;
7
8        for (int high = 0; high < nums.length; high++) {
9            sum += nums[high];
10            while (high - low + 1 > k) {
11                sum -= nums[low];
12                low++;
13            }
14            if (high - low + 1 == k) {
15                ans = Math.max(ans,  ((double)sum / (high - low + 1)));
16            }
17
18        }
19
20        return ans;
21    }
22}