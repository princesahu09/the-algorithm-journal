1class Solution {
2public:
3    void dfs(vector<vector<int>>& grid, int row, int col,
4             vector<vector<bool>>& visited) {
5
6        if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0 ||
7            grid[row][col] == 0 || visited[row][col])
8
9        {
10            return;
11        }
12
13        visited[row][col] = true;
14
15        dfs(grid, row + 1, col, visited);
16        dfs(grid, row - 1, col, visited);
17        dfs(grid, row, col + 1, visited);
18        dfs(grid, row, col - 1, visited);
19    }
20
21    // int enclave(vector<vector<int>>& grid, int row, int col,
22    //             vector<vector<bool>>& visited) {
23    //     if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0 ||
24    //         grid[row][col] == 0 || visited[row][col])
25
26    //     {
27    //         return 0;
28    //     }
29
30    //     visited[row][col] = true;
31
32    //     int left = 1 + enclave(grid, row + 1, col, visited);
33    //     int right = 1 + enclave(grid, row - 1, col, visited);
34    //     int down = 1 + enclave(grid, row, col + 1, visited);
35    //     int up = 1 + enclave(grid, row, col - 1, visited);
36
37    //     return max({left, right, down, up});
38    // }
39    int numEnclaves(vector<vector<int>>& grid) {
40        int m = grid.size();
41        int n = grid[0].size();
42
43        vector<vector<bool>> visited(m, vector<bool>(n, false));
44        for (int j = 0; j < n; j++) {
45            if (!visited[0][j] && grid[0][j] == 1) {
46                dfs(grid, 0, j, visited);
47            }
48            if (!visited[m - 1][j] && grid[m - 1][j] == 1) {
49                dfs(grid, m - 1, j, visited);
50            }
51        }
52        for (int i = 1; i < m - 1; i++) {
53            if (!visited[i][0] && grid[i][0] == 1) {
54                dfs(grid, i, 0, visited);
55            }
56            if (!visited[i][n - 1] && grid[i][n - 1] == 1) {
57                dfs(grid, i, n - 1, visited);
58            }
59        }
60
61        int ans = 0;
62        for (int i = 0; i < m; i++) {
63            for (int j = 0; j < n; j++) {
64                if (grid[i][j] == 1 && !visited[i][j]) {
65
66                    ans++;
67                }
68            }
69        }
70
71        return ans;
72    }
73};