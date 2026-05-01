1class Solution {
2public:
3    bool checkRow(vector<vector<int>>& grid) {
4
5        int n = grid.size();
6
7        for (int i = 0; i < n; i++) {
8            unordered_set<int> s;
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
21            if (s.size() != n)
22                return false;
23        }
24
25        return true;
26    }
27    bool checkCol(vector<vector<int>>& grid) {
28
29        int n = grid.size();
30
31        for (int i = 0; i < n; i++) {
32            unordered_set<int> s;
33
34            for (int j = 0; j < n; j++) {
35
36                if (s.count(grid[j][i])) {
37                    return false;
38                } else {
39                    s.insert(grid[j][i]);
40                }
41            }
42
43            if (s.size() != n) {
44
45                return false;
46            }
47        }
48
49        return true;
50    }
51    bool checkValid(vector<vector<int>>& matrix) {
52
53        return checkRow(matrix) && checkCol(matrix);
54    }
55};