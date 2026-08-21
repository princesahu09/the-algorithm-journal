1class Solution {
2    public int minDistance(String word1, String word2) {
3
4        int m = word2.length();
5        int n = word1.length();
6
7        int[][] dp = new int[m + 1][n + 1];
8
9        dp[0][0] = 0;
10
11        for (int i = 1; i <= m; i++) {
12            dp[i][0] = i;
13        }
14
15        for (int j = 1; j <= n; j++) {
16            dp[0][j] = j;
17        }
18
19        for (int i = 1; i <= m; i++) {
20
21            for (int j = 1; j <= n; j++) {
22
23                if (word1.charAt(j - 1) != word2.charAt(i - 1)) {
24                    dp[i][j] = 1 + Math.min(dp[i - 1][j - 1], Math.min(dp[i - 1][j], dp[i][j - 1]));
25                } else {
26                    dp[i][j] = dp[i - 1][j - 1];
27                }
28            }
29        }
30
31        return dp[m][n];
32
33    }
34}