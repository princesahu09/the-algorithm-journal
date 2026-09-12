1class Solution {
2    public int[] resultsArray(int[] nums, int k) {
3
4        int low = 0;
5        int cos = 0;
6        int[] ans = new int[nums.length - k + 1];
7        int index = 0;
8
9        for (int high = 0; high < nums.length; high++) {
10            if (high > 0 && nums[high - 1] + 1 == nums[high]) {
11                cos++;
12            } else {
13                cos = 1;
14            }
15            if (high - low + 1 > k) {
16                low++;
17            }
18            if (high - low + 1 == k) {
19                if (cos >= k) {
20                    ans[index++] = nums[high];
21                } else {
22                    ans[index++] = -1;
23                }
24            }
25        }
26        return ans;
27
28    }
29}