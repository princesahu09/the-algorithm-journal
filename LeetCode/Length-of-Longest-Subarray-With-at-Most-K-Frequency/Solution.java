1class Solution {
2
3
4    public int maxSubarrayLength(int[] nums, int k) {
5
6        int low = 0;
7        int ans = 0;
8
9        HashMap<Integer, Integer> freq = new HashMap<>();
10
11        for (int high = 0; high < nums.length; high++) {
12            freq.put(nums[high], freq.getOrDefault(nums[high], 0) + 1);
13
14            while (freq.get(nums[high]) > k) {
15                int t = nums[low];
16                freq.put(t, freq.getOrDefault(t, 0) - 1);
17                if (freq.get(t) == 0) {
18                    freq.remove(t);
19                }
20                low++;
21            }
22
23            ans = Math.max(ans, high - low + 1);
24
25        }
26        return ans;
27
28    }
29}