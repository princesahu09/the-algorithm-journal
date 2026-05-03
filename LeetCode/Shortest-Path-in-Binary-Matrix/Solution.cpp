1class Solution {
2public:
3    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4
5        if (grid[0][0] == 1)
6            return -1;
7
8        int n = grid.size();
9
10       // vector<vector<bool>> visited(n, vector<bool>(n, false));
11
12        queue<pair<pair<int, int>, int>> q;
13        vector<pair<int, int>> move = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
14                                       {0, 1},   {1, -1}, {1, 0},  {1, 1}};
15        q.push({{0, 0}, 1});
16        grid[0][0]=1;
17       // visited[0][0] = true;
18
19        while (q.size() > 0) {
20            pair<int, int> point = q.front().first;
21            int path = q.front().second;
22            int i = point.first;
23            int j = point.second;
24            q.pop();
25            if (i == n - 1 && j == n - 1) {
26                return path;
27            }
28
29            for (auto& m : move) {
30                int x = i + m.first;
31                int y = j + m.second;
32
33                if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == 0) {
34
35                   
36                        grid[x][y]=1;
37                        q.push({{x, y}, path + 1});
38                      //  visited[x][y] = true;
39                    
40                }
41            }
42        }
43
44        return -1;
45    }
46};