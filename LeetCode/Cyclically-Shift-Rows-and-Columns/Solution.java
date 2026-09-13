1class Solution {
2    public int[][] cyclicShift(int n, int[][] grid, int[] rowShift, int[] colShift) {
3
4        int[][] ans = new int[n][n];
5        for (int i = 0; i < n; i++) {
6            for (int j = 0; j < n; j++) {
7
8                int c = (j - rowShift[i] + n) % n;
9                int r = (i - colShift[c] + n) % n;
10                ans[r][c] = grid[i][j];
11            }
12        }
13
14        return ans;
15
16    }
17}