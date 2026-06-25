1class Solution {
2public:
3    bool solve(vector<vector<char>>& grid, int row, int col, int index,
4               vector<vector<bool>>& visited, string& word) {
5
6        if (index == word.size()) {
7            return true;
8        }
9        if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0 ||
10            visited[row][col]) {
11            return false;
12        }
13
14        if (grid[row][col] != word[index]) {
15            return false;
16        }
17
18        visited[row][col] = true;
19        bool right = solve(grid, row, col + 1, index + 1, visited, word);
20        bool down = solve(grid, row + 1, col, index + 1, visited, word);
21        bool up = solve(grid, row - 1, col, index + 1, visited, word);
22        bool left = solve(grid, row, col - 1, index + 1, visited, word);
23
24        visited[row][col] = false;
25        return right || down || up || left;
26    }
27    bool exist(vector<vector<char>>& grid, string word) {
28
29        const int m = grid.size();
30        const int n = grid[0].size();
31
32        vector<vector<bool>> visited(m, vector<bool>(n, false));
33        bool ans = false;
34
35        for (int i = 0; i < m; i++) {
36
37            for (int j = 0; j < n; j++) {
38
39                if (grid[i][j] == word[0])
40
41                {
42                    ans = solve(grid, i, j, 0, visited, word);
43                    if (ans) {
44                        return true;
45                    }
46                }
47            }
48        }
49
50        return false;
51    }
52};