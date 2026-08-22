1class Solution {
2    int solve(int[] prices, int index, int buy, int[][] dp, int fee) {
3
4        if (index >= prices.length) {
5            return 0;
6        }
7
8        if (dp[index][buy] != -1) {
9            return dp[index][buy];
10        }
11
12        if (buy == 1) {
13            return dp[index][buy] = Math.max(-prices[index] + solve(prices, index + 1, 0, dp, fee),
14                    solve(prices, index + 1, 1, dp, fee));
15        } else {
16            return dp[index][buy] = Math.max(prices[index] - fee + solve(prices, index + 1, 1, dp, fee),
17                    solve(prices, index + 1, 0, dp, fee));
18        }
19    }
20
21    public int maxProfit(int[] prices, int fee) {
22        int n = prices.length;
23        int[][] dp = new int[n + 1][2];
24
25        for (int i = 0; i <= n; i++) {
26            dp[i][0] = -1;
27            dp[i][1] = -1;
28        }
29        return solve(prices, 0, 1, dp, fee);
30
31    }
32}