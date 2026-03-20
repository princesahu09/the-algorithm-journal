1class Solution {
2public:
3    int solve(vector<vector<int>>& grid, vector<vector<bool>>& visited, int row,
4              int col, int x1, int y1, int x2, int y2, int total, int count) {
5
6        if (x1 < 0 || x1 >= row || y1 < 0 || y1 >= col || grid[x1][y1] == -1 ||
7            visited[x1][y1]) {
8            return 0;
9        }
10
11        if (x1 == x2 && y1 == y2) {
12            return total == count ? 1 : 0;
13        }
14        visited[x1][y1] = true;
15        int ans = solve(grid, visited, row, col, x1 - 1, y1, x2, y2, total,
16                        count + 1) +
17                  solve(grid, visited, row, col, x1 + 1, y1, x2, y2, total,
18                        count + 1) +
19                  solve(grid, visited, row, col, x1, y1 + 1, x2, y2, total,
20                        count + 1) +
21                  solve(grid, visited, row, col, x1, y1 - 1, x2, y2, total,
22                        count + 1);
23        visited[x1][y1] = false;
24        return ans;
25    }
26
27    pair<int, int> finder(vector<vector<int>>& grid, int val) {
28
29        int row = grid.size();
30        int col = grid[0].size();
31
32        for (int i = 0; i < row; i++) {
33            for (int j = 0; j < col; j++) {
34                if (grid[i][j] == val) {
35                    return {i, j};
36                }
37            }
38        }
39        return {-1, -1};
40    }
41    int empty(vector<vector<int>>& grid) {
42        int ans = 0;
43        int row = grid.size();
44        int col = grid[0].size();
45
46        for (int i = 0; i < row; i++) {
47            for (int j = 0; j < col; j++) {
48                if (grid[i][j] != -1) {
49                    ans++;
50                }
51            }
52        }
53        return ans;
54    }
55
56    int uniquePathsIII(vector<vector<int>>& grid) {
57
58        int row = grid.size();
59        int col = grid[0].size();
60
61        vector<vector<bool>> visited(row, vector<bool>(col, false));
62
63        auto src = finder(grid, 1);
64        auto dest = finder(grid, 2);
65        int x1 = src.first;
66        int y1 = src.second;
67        int x2 = dest.first;
68        int y2 = dest.second;
69        int total = empty(grid);
70
71        return solve(grid, visited, row, col, x1, y1, x2, y2, total, 1);
72    }
73};