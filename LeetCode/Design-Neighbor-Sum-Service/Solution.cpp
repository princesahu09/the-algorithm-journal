1class NeighborSum {
2public:
3    vector<vector<int>> mat;
4    NeighborSum(vector<vector<int>>& grid) { mat = grid; }
5
6    int adjacentSum(int value) {
7        int sum = 0;
8        for (int i = 0; i < mat.size(); i++) {
9            for (int j = 0; j < mat[0].size(); j++) {
10                if (mat[i][j] == value) {
11                    if (i + 1 < mat.size()) {
12                        sum += mat[i + 1][j];
13                    }
14                    if (i - 1 >= 0) {
15                        sum += mat[i - 1][j];
16                    }
17                    if (j - 1 >= 0) {
18                        sum += mat[i][j - 1];
19                    }
20                    if (j + 1 < mat[0].size()) {
21                        sum += mat[i][j + 1];
22                    }
23                    return sum;
24                }
25            }
26        }
27        return sum;
28    }
29
30    int diagonalSum(int value) {
31        int sum = 0;
32        for (int i = 0; i < mat.size(); i++) {
33            for (int j = 0; j < mat[0].size(); j++) {
34                if (mat[i][j] == value) {
35
36                    if (i - 1 >= 0 && j - 1 >= 0) {
37                        sum += mat[i - 1][j - 1];
38                    }
39                    if (i + 1 < mat.size() && j - 1 >= 0) {
40                        sum += mat[i + 1][j - 1];
41                    }
42
43                    if (i + 1 < mat.size() && j + 1 < mat[0].size()) {
44                        sum += mat[i + 1][j + 1];
45                    }
46                    if (i - 1 >=0 && j + 1 < mat[0].size()) {
47                        sum += mat[i - 1][j + 1];
48                    }
49                    return sum;
50                }
51            }
52        }
53        return sum;
54    }
55};
56
57/**
58 * Your NeighborSum object will be instantiated and called as such:
59 * NeighborSum* obj = new NeighborSum(grid);
60 * int param_1 = obj->adjacentSum(value);
61 * int param_2 = obj->diagonalSum(value);
62 */