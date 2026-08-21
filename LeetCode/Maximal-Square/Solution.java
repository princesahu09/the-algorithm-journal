1class Solution {
2
3    // void print(int[][] grid) {
4    //     for (int i = 0; i < grid.length; i++) {
5    //         for (int j = 0; j < grid[0].length; j++) {
6    //             System.out.print(grid[i][j] + " ");
7    //         }
8    //         System.out.println();
9    //     }
10    // }
11
12    public int maximalSquare(char[][] matrix) {
13
14        int m = matrix.length;
15        int n = matrix[0].length;
16
17        int[][] dp = new int[m][n];
18
19        for (int i = 0; i < m; i++) {
20            dp[i][0] = (int) (matrix[i][0] - '0');
21        }
22
23        for (int j = 0; j < n; j++) {
24            dp[0][j] = (int) (matrix[0][j] - '0');
25        }
26        for (int i = 1; i < m; i++) {
27            for (int j = 1; j < n; j++) {
28
29                if (matrix[i][j] == '0') {
30                    dp[i][j] = 0;
31
32                }
33
34                else {
35
36                    dp[i][j] = Math.min(dp[i - 1][j - 1], Math.min(dp[i][j - 1], dp[i - 1][j])) + 1;
37
38                }
39            }
40        }
41
42       // print(dp);
43
44        int ans = Integer.MIN_VALUE;
45
46        for (int i = 0; i < m; i++) {
47            for (int j = 0; j < n; j++) {
48                ans = Math.max(ans, dp[i][j]);
49            }
50        }
51        return ans * ans;
52
53    }
54}