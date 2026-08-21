1class Solution {
2    public int minimumTotal(List<List<Integer>> triangle) {
3
4        int h = triangle.size();
5
6        int[][] dp = new int[h + 1][h + 1];
7
8        for (int i = 0; i <= h; i++) {
9            Arrays.fill(dp[i], 0);
10        }
11
12        for (int level = h - 1; level >= 0; level--) {
13
14            for (int i = 0; i <= level; i++) {
15                dp[level][i] = triangle.get(level).get(i) + Math.min(dp[level + 1][i], dp[level + 1][i + 1]);
16            }
17        }
18
19        return dp[0][0];
20
21    }
22}