1class Solution {
2    public int[] getAverages(int[] nums, int k) {
3
4        int n = nums.length;
5
6        int[] ans = new int[n];
7        Arrays.fill(ans, -1);
8        long sum = 0;
9
10        int low = 0;
11
12        for (int high = 0; high < n; high++) {
13            sum += nums[high];
14
15            while (high - low + 1 > 2 * k + 1) {
16                sum -= nums[low];
17                low++;
18            }
19
20            if (high - low + 1 == 2 * k + 1) {
21                ans[low + k] = (int) (sum / (2*k+1));
22            }
23        }
24
25        return ans;
26
27    }
28}