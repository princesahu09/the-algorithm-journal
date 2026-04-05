1class Solution {
2public:
3    int solve(string &x, string &y, int n, int m, vector<vector<int>>& dp) {
4        if (n == 0 || m == 0) {
5            return dp[n][m]= 0;
6        }
7
8        if (dp[n][m] != -1) {
9            return dp[n][m];
10        }
11
12        if (x[n - 1] == y[m - 1]) {
13            return dp[n][m] = 1 + solve(x, y, n - 1, m - 1, dp);
14        }
15
16        return dp[n][m] =
17                   max(solve(x, y, n, m - 1, dp), solve(x, y, n - 1, m, dp));
18    }
19    int longestCommonSubsequence(string text1, string text2) {
20
21        int n = text1.size();
22        int m = text2.size();
23        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
24
25        return solve(text1, text2, text1.size(), text2.size(), dp);
26    }
27};