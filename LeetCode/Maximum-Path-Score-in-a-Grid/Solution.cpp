1class Solution {
2public:
3    int solve(vector<vector<int>>& grid, int row, int col, int cost, int k,
4              vector<vector<vector<int>>>& dp) {
5        if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0) {
6            return INT_MIN;
7        }
8        int newcost = cost + (grid[row][col] == 0 ? 0 : 1);
9
10        if (newcost > k) {
11            return INT_MIN;
12        }
13        if (row == grid.size() - 1 && col == grid[0].size() - 1) {
14            return grid[row][col];
15        }
16
17        if (dp[row][col][cost] != -1) {
18            return dp[row][col][cost];
19        }
20
21        int right = solve(grid, row, col + 1, newcost, k, dp);
22        int down = solve(grid, row + 1, col, newcost, k, dp);
23
24        int best = max(right, down);
25
26        if (best == INT_MIN)
27            return dp[row][col][cost]=INT_MIN;
28
29        return dp[row][col][cost] = grid[row][col] + best;
30    }
31    int maxPathScore(vector<vector<int>>& grid, int k) {
32
33        vector<vector<vector<int>>> dp(
34            grid.size(),
35            vector<vector<int>>(grid[0].size(), vector<int>(k + 1, -1)));
36
37        int ans = solve(grid, 0, 0, 0, k, dp);
38
39        return ans == INT_MIN ? -1 : ans;
40    }
41};