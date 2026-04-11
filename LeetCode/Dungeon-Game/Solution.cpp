1class Solution {
2public:
3    int solve(vector<vector<int>>& grid, int row, int col, int need,vector<vector<int>>&dp) {
4
5        if (row >= grid.size() || col >= grid[0].size() || need <= 0) {
6            return INT_MAX;
7        }
8
9        if (row == grid.size() - 1 && col == grid[0].size() - 1) {
10            return dp[row][col]=max(1, 1 - grid[row][col]);
11        }
12        if(dp[row][col]!=-1)
13        {
14
15            return dp[row][col];
16        }
17
18        int right = solve(grid, row, col + 1, need,dp);
19        int down = solve(grid, row + 1, col, need,dp);
20
21        need = min(right, down) - grid[row][col];
22
23        return dp[row][col]=max(1, need);
24    }
25    int calculateMinimumHP(vector<vector<int>>& dungeon) {
26
27        const int m=dungeon.size();
28        const int n=dungeon[0].size();
29        vector<vector<int>>dp(m,vector<int>(n,-1));
30
31
32        return solve(dungeon, 0, 0, INT_MAX,dp);
33    }
34};