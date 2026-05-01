1class Solution {
2public:
3    bool checkRow(vector<vector<int>>& grid) {
4
5        int n = grid.size();
6
7        unordered_set<int> s;
8        for (int i = 0; i < n; i++) {
9
10            for (int j = 0; j < n; j++) {
11
12                if (s.count(grid[i][j])) {
13                    return false;
14                } else
15
16                {
17                    s.insert(grid[i][j]);
18                }
19            }
20
21            if (s.size() != n) {
22                return false;
23            } else {
24                s.clear();
25            }
26        }
27
28        return true;
29    }
30    bool checkCol(vector<vector<int>>& grid) {
31
32        int n = grid.size();
33        unordered_set<int> s;
34
35        for (int i = 0; i < n; i++) {
36
37            for (int j = 0; j < n; j++) {
38
39                if (s.count(grid[j][i])) {
40                    return false;
41                } else {
42                    s.insert(grid[j][i]);
43                }
44            }
45
46            if (s.size() != n) {
47
48                return false;
49            } else {
50                s.clear();
51            }
52        }
53
54        return true;
55    }
56    bool checkValid(vector<vector<int>>& matrix) {
57
58        return checkRow(matrix) && checkCol(matrix);
59    }
60};