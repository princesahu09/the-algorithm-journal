1class Solution {
2public:
3    int solve(vector<vector<int>>& grid, int row, int col,
4              vector<vector<bool>>& visited) {
5        if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0 ||
6            visited[row][col] || grid[row][col] == 0) {
7            return 0;
8        }
9
10        visited[row][col] = true;
11        int left = solve(grid, row, col - 1, visited);
12        int right = solve(grid, row, col + 1, visited);
13        int down = solve(grid, row + 1, col, visited);
14        int up = solve(grid, row - 1, col, visited);
15
16        return grid[row][col] + left + down + right + up;
17    }
18    int maxAreaOfIsland(vector<vector<int>>& grid) {
19
20        const int m = grid.size();
21        const int n = grid[0].size();
22
23        vector<vector<bool>> visited(m, vector<bool>(n, false));
24        int ans = 0;
25
26        for (int i = 0; i < m; i++) {
27
28            for (int j = 0; j < n; j++) {
29
30                if (grid[i][j] == 1 && !visited[i][j]) {
31                    int temp = solve(grid, i, j, visited);
32                    ans = max(ans, temp);
33                }
34            }
35        }
36
37        return ans;
38    }
39};