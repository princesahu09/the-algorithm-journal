1class Solution {
2public:
3    int solve(int e, int f, vector<vector<int>>& dp) {
4        if (f == 0 || f == 1) {
5            return f;
6        }
7
8        if (e == 1) {
9            return f;
10        }
11
12        if (dp[e][f] != -1) {
13            return dp[e][f];
14        }
15
16        int ans = INT_MAX;
17        for (int k = 1; k <= f; k++) {
18
19            int temp = 1 + max(solve(e - 1, k - 1, dp), solve(e, f - k, dp));
20
21            ans = min(ans, temp);
22        }
23
24        return dp[e][f] = ans;
25    }
26    int twoEggDrop(int n) {
27
28        vector<vector<int>> dp(3, vector<int>(n + 1, -1));
29        return solve(2, n, dp);
30    }
31};