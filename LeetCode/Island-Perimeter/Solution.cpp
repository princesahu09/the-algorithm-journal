1class Solution {
2public:
3    int islandPerimeter(vector<vector<int>>& grid) {
4
5        int ans = 0;
6
7        int m = grid.size();
8        int n = grid[0].size();
9
10        for (int i = 0; i < m; i++) {
11
12            for (int j = 0; j < n; j++) {
13
14                if (grid[i][j] == 0) {
15                    continue;
16                } else {
17
18                    if (i - 1 < 0) {
19                        ans++;
20                    }
21                    if (i + 1 >= m) {
22                        ans++;
23                    }
24                    if (j + 1 >= n) {
25                        ans++;
26                    }
27                    if (j - 1 < 0) {
28                        ans++;
29                    }
30                    if (i - 1 >= 0 && grid[i - 1][j] == 0) {
31                        ans += 1;
32                    }
33                    if (j - 1 >= 0 && grid[i][j - 1] == 0) {
34                        ans += 1;
35                    }
36                    if (i + 1 < m && grid[i + 1][j] == 0) {
37                        ans += 1;
38                    }
39                    if (j + 1 < n && grid[i][j + 1] == 0) {
40                        ans += 1;
41                    }
42                }
43            }
44        }
45
46        return ans;
47    }
48};