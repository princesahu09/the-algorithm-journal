1class Solution {
2    public int numSubarrayProductLessThanK(int[] nums, int k) {
3
4        int low = 0;
5        long prod = 1;
6        int ans = 0;
7
8        for (int high = 0; high < nums.length; high++) {
9            prod *= nums[high];
10
11            while (low<=high&&prod >= k) {
12                prod /= nums[low];
13                low++;
14            }
15            ans += high - low + 1;
16        }
17        return ans;
18
19    }
20}