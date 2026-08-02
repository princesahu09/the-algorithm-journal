1class Solution {
2    public int countRatioSubarrays(int[] nums, int a, int b) {
3
4        int ans = 0;
5
6        for (int i = 0; i < nums.length; i++) {
7            int x = 0;
8            int y = 0;
9
10            for (int j = i; j < nums.length; j++) {
11                if (nums[j] % 2 == 0)
12                    x++;
13                else
14                    y++;
15                if (y > 0 && x * b <= a * y) {
16                    ans++;
17
18                }
19
20            }
21        }
22
23        return ans;
24
25    }
26}