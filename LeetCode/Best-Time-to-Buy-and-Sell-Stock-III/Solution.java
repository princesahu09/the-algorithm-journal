1class Solution {
2
3    int solve(int[] prices, int index, int buy, int cap, int[][][] dp) {
4        if (cap == 0) {
5            return 0;
6        }
7        if (index == prices.length) {
8            return 0;
9        }
10        if (dp[index][buy][cap] != -1) {
11            return dp[index][buy][cap];
12        }
13
14        if (buy == 1) {
15            return dp[index][buy][cap] = Math.max(-prices[index] + solve(prices, index + 1, 0, cap, dp),
16                    solve(prices, index + 1, 1, cap, dp));
17        }
18
19        else {
20            return dp[index][buy][cap] = Math.max(prices[index] + solve(prices, index + 1, 1, cap - 1, dp),
21                    solve(prices, index + 1, 0, cap, dp));
22        }
23    }
24
25    public int maxProfit(int[] prices) {
26
27        int[][][] dp = new int[prices.length + 1][2][2 + 1];
28        for (int[][] arr : dp) {
29            for (int[] row : arr) {
30                Arrays.fill(row, -1);
31            }
32        }
33
34        return solve(prices, 0, 1, 2, dp);
35
36    }
37}