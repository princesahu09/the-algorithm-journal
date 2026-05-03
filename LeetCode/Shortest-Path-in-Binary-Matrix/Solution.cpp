1class Solution {
2public:
3    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4
5        if (grid[0][0] == 1)
6            return -1;
7
8        int n = grid.size();
9
10        vector<vector<bool>> visited(n, vector<bool>(n, false));
11
12        queue<pair<pair<int, int>, int>> q;
13        vector<pair<int, int>> move = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
14                                       {0, 1},   {1, -1}, {1, 0},  {1, 1}};
15        q.push({{0, 0}, 1});
16        visited[0][0] = true;
17
18        while (q.size() > 0) {
19            pair<int, int> point = q.front().first;
20            int path = q.front().second;
21            int i = point.first;
22            int j = point.second;
23            q.pop();
24            if (i == n - 1 && j == n - 1) {
25                return path;
26            }
27
28            for (auto& m : move) {
29                int x = i + m.first;
30                int y = j + m.second;
31
32                if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == 0) {
33
34                    if (!visited[x][y]) {
35                        q.push({{x, y}, path + 1});
36                        visited[x][y] = true;
37                    }
38                }
39            }
40        }
41
42        return -1;
43    }
44};