1class Solution {
2public:
3const int MOD=1e9+7;
4    int solve(vector<vector<int>>& grid, int row, int col,
5              vector<vector<bool>>& visited, int prev, int ans,
6              vector<vector<int>>& dp) {
7
8        if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() ||
9            prev >= grid[row][col]) {
10            return 0;
11        }
12        if (dp[row][col] != -1) {
13            return dp[row][col];
14        }
15
16        int left = solve(grid, row, col - 1, visited, grid[row][col], ans, dp)%MOD;
17        int right = solve(grid, row, col + 1, visited, grid[row][col], ans, dp)%MOD;
18        int down = solve(grid, row + 1, col, visited, grid[row][col], ans, dp)%MOD;
19        int up = solve(grid, row - 1, col, visited, grid[row][col], ans, dp)%MOD;
20
21        return dp[row][col] =( 1 + left + right + down + up)%MOD;
22    }
23    int countPaths(vector<vector<int>>& grid) {
24        const int m = grid.size();
25        const int n = grid[0].size();
26        int ans = 0;
27        vector<vector<bool>> visited(m, vector<bool>(n, false));
28
29        vector<vector<int>> dp(m, vector<int>(n, -1));
30
31        for (int i = 0; i < m; i++) {
32
33            for (int j = 0; j < n; j++) {
34
35                int temp = solve(grid, i, j, visited, INT_MIN, 1, dp);
36
37                ans =(ans%MOD+temp%MOD)%MOD;
38            }
39        }
40
41        return ans;
42    }
43};