1class Solution {
2    public int missingNumber(int[] nums) {
3
4        boolean[] vis = new boolean[nums.length + 1];
5
6        int prefix = 0;
7
8        for (int i = 0; i < nums.length; i++) {
9
10            vis[nums[i]] = true;
11
12            while (prefix < nums.length && vis[prefix]) {
13                prefix++;
14
15            }
16        }
17
18        return prefix;
19
20    }
21}