1class Solution {
2public:
3    int high(vector<vector<int>>& grid, int row, int col) {
4
5        int ans = INT_MIN;
6        for (int i = row; i < row + 3; i++) {
7            for (int j = col; j < col + 3; j++) {
8
9                ans = max(ans, grid[i][j]);
10            }
11        }
12
13        return ans;
14    }
15    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
16
17        const int n = grid.size();
18
19        vector<vector<int>> ans(n - 2, vector<int>(n - 2, 0));
20
21        for (int i = 0; i < n - 2; i++) {
22            for (int j = 0; j < n - 2; j++) {
23
24                ans[i][j] = high(grid, i, j);
25            }
26        }
27
28        return ans;
29    }
30};