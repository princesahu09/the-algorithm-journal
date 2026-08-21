1class Solution {
2
3    int profit = 0;
4
5    int solve(int[] prices, int index, int buy, int[][] dp) {
6        if (index == prices.length) {
7            return 0;
8        }
9
10        if (dp[index][buy] != -1) {
11            return dp[index][buy];
12        }
13
14        if (buy == 1) {
15            profit = Math.max(-prices[index] + solve(prices, index + 1, 0, dp), solve(prices, index + 1, 1, dp));
16
17        } else {
18            profit = Math.max(prices[index] + solve(prices, index + 1, 1, dp), solve(prices, index + 1, 0, dp));
19        }
20        return dp[index][buy] = profit;
21    }
22
23    public int maxProfit(int[] prices) {
24
25        int[][] dp = new int[prices.length + 1][2];
26        for (int i = 0; i < prices.length + 1; i++) {
27            dp[i][0] = -1;
28            dp[i][1] = -1;
29        }
30        solve(prices, 0, 1, dp);
31
32        return profit;
33
34    }
35}