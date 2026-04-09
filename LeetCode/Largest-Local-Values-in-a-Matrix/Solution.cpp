1#pragma GCC optimize ("Ofast")
2#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
3#pragma GCC optimize ("-ffloat-store")
4class Solution {
5public:
6    int high(vector<vector<int>>& grid, int row, int col) {
7
8        int ans = INT_MIN;
9        for (int i = row; i < row + 3; i++) {
10            for (int j = col; j < col + 3; j++) {
11
12                ans = max(ans, grid[i][j]);
13            }
14        }
15
16        return ans;
17    }
18    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
19
20        const int n = grid.size();
21
22        vector<vector<int>> ans(n - 2, vector<int>(n - 2, 0));
23
24        for (int i = 0; i < n - 2; i++) {
25            for (int j = 0; j < n - 2; j++) {
26
27                ans[i][j] = high(grid, i, j);
28            }
29        }
30
31        return ans;
32    }
33};