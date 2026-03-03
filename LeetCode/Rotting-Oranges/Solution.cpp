1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4
5        int n = grid.size();
6        int m = grid[0].size();
7        queue<vector<int>> q;
8
9        vector<vector<bool>> vis(n, vector<bool>(m, false));
10        int ans = 0;
11        for (int i = 0; i < n; i++) {
12            for (int j = 0; j < m; j++) {
13                if (grid[i][j] == 2) {
14                    q.push({i, j, 0});
15                }
16            }
17        }
18
19        while (q.size() > 0) {
20            vector<int> temp = q.front();
21            int i = temp[0];
22            int j = temp[1];
23            int time = temp[2];
24            q.pop();
25
26            ans = max(ans, time);
27
28            if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j] == 1) {
29
30                q.push({i - 1, j, time + 1});
31                vis[i - 1][j] = true;
32            }
33            if (i + 1 < n && !vis[i + 1][j] && grid[i + 1][j] == 1) {
34                q.push({i + 1, j, time + 1});
35                vis[i + 1][j] = true;
36            }
37            if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1] == 1) {
38                q.push({i, j - 1, time + 1});
39                vis[i][j - 1] = true;
40            }
41            if (j + 1 < m && !vis[i][j + 1] && grid[i][j + 1] == 1) {
42                q.push({i, j + 1, time + 1});
43                vis[i][j + 1] = true;
44            }
45        }
46        for (int i = 0; i < n; i++) {
47            for (int j = 0; j < m; j++) {
48                if (grid[i][j] == 1 && !vis[i][j]) {
49                    return -1;
50                }
51            }
52        }
53
54        return ans;
55    }
56};