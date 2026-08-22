1class Solution {
2    int solve(int[] prices, int index, int buy, int cap, int[][][] dp) {
3        if (cap == 0) {
4            return 0;
5        }
6        if (index == prices.length) {
7            return 0;
8        }
9        if (dp[index][buy][cap] != -1) {
10            return dp[index][buy][cap];
11        }
12
13        if (buy == 1) {
14            return dp[index][buy][cap] = Math.max(-prices[index] + solve(prices, index + 1, 0, cap, dp),
15                    solve(prices, index + 1, 1, cap, dp));
16        }
17
18        else {
19            return dp[index][buy][cap] = Math.max(prices[index] + solve(prices, index + 1, 1, cap - 1, dp),
20                    solve(prices, index + 1, 0, cap, dp));
21        }
22    }
23
24    public int maxProfit(int k, int[] prices) {
25        int[][][] dp = new int[prices.length + 1][2][k + 1];
26        for (int[][] arr : dp) {
27            for (int[] row : arr) {
28                Arrays.fill(row, -1);
29            }
30        }
31
32        return solve(prices, 0, 1, k, dp);
33
34    }
35}