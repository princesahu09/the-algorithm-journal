1class Solution {
2
3    int solve(int[] nums, int k) {
4        int low = 0;
5        int ans = 0;
6
7        HashMap<Integer, Integer> freq = new HashMap<>();
8
9        for (int high = 0; high < nums.length; high++) {
10            freq.put(nums[high], freq.getOrDefault(nums[high], 0) + 1);
11
12            while (freq.size() > k) {
13                freq.put(nums[low], freq.getOrDefault(nums[low], 0) - 1);
14
15                if (freq.get(nums[low]) == 0) {
16                    freq.remove(nums[low]);
17                }
18                low++;
19            }
20
21            ans += high - low + 1;
22
23        }
24        return ans;
25
26    }
27
28    public int subarraysWithKDistinct(int[] nums, int k) {
29
30        return solve(nums, k) - solve(nums, k - 1);
31
32    }
33}