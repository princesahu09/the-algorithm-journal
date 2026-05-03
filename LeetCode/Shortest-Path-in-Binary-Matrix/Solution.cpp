1class Solution {
2public:
3    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4
5        if (grid[0][0] == 1)
6            return -1;
7
8        int n = grid.size();
9
10        // vector<vector<bool>> visited(n, vector<bool>(n, false));
11
12        queue<pair<int, int>> q;
13        vector<pair<int, int>> move = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
14                                       {0, 1},   {1, -1}, {1, 0},  {1, 1}};
15        q.push({0, 0});
16        grid[0][0] = 1;
17        // visited[0][0] = true;
18        int step = 0;
19
20        while (q.size() > 0) {
21            int count = q.size();
22            while (count--) {
23                int i = q.front().first;
24                int j = q.front().second;
25                q.pop();
26                if (i == n - 1 && j == n - 1) {
27                    return step + 1;
28                }
29
30                for (auto& m : move) {
31                    int x = i + m.first;
32                    int y = j + m.second;
33
34                    if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == 0) {
35
36                        grid[x][y] = 1;
37                        q.push({x, y});
38                        //  visited[x][y] = true;
39                    }
40                }
41            }
42            step++;
43        }
44
45        return -1;
46    }
47};