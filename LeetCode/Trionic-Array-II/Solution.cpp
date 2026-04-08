1class Solution {
2public:
3    int solve(vector<vector<int>>& grid, int row, int col,
4              vector<vector<bool>>& visited) {
5
6        if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0 ||
7            visited[row][col] || grid[row][col] == 0) {
8            return 0;
9        }
10
11        // if (row == grid.size() - 1 || col == grid[0].size()-1) {
12        //     return grid[row][col];
13        // }
14
15        visited[row][col] = true;
16
17        int left = grid[row][col] + solve(grid, row, col - 1, visited);
18        int right = grid[row][col] + solve(grid, row, col + 1, visited);
19        int up = grid[row][col] + solve(grid, row - 1, col, visited);
20        int down = grid[row][col] + solve(grid, row + 1, col, visited);
21
22        visited[row][col] = false;
23
24        return max({left, right, up, down});
25    }
26    int getMaximumGold(vector<vector<int>>& grid) {
27
28        const int m = grid.size();
29        const int n = grid[0].size();
30
31        int ans = INT_MIN;
32
33        vector<vector<bool>> visited(m, vector<bool>(n, false));
34        for (int i = 0; i < m; i++) {
35
36            for (int j = 0; j < n; j++) {
37
38                if (grid[i][j] != 0) {
39                    int temp = solve(grid, i, j, visited);
40                    ans = max(ans, temp);
41
42                    visited = vector<vector<bool>>(m, vector<bool>(n, false));
43                } else {
44                    continue;
45                }
46            }
47        }
48
49        return ans==INT_MIN?0:ans;
50    }
51};