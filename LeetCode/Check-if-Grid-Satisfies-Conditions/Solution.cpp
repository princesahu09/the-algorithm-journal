1class Solution {
2public:
3    bool solve(vector<vector<int>>& grid, int row, int col,
4               vector<vector<int>>& dp) {
5
6        if (row >= grid.size() || col >= grid[0].size()) {
7            return true;
8        }
9        if (row + 1 < grid.size() && grid[row][col] != grid[row + 1][col]) {
10            return false;
11        }
12        if (col + 1 < grid[0].size() && grid[row][col] == grid[row][col + 1]) {
13            return false;
14        }
15        if (dp[row][col] != -1) {
16            return dp[row][col];
17        }
18
19        bool down = solve(grid, row + 1, col, dp);
20        bool right = solve(grid, row, col + 1, dp);
21
22        return dp[row][col] = down && right;
23    }
24    bool satisfiesConditions(vector<vector<int>>& grid) {
25
26        int m = grid.size();
27        int n = grid[0].size();
28        vector<vector<int>> dp(m, vector<int>(n, -1));
29
30        return solve(grid, 0, 0, dp);
31    }
32};