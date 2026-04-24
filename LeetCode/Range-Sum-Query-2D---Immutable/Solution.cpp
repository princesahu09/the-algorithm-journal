1class NumMatrix {
2public:
3    vector<vector<int>> grid;
4    NumMatrix(vector<vector<int>>& matrix) {
5
6        grid = transform(matrix);
7
8      
9    }
10
11    vector<vector<int>> transform(vector<vector<int>>& grid) {
12        for (int i = 0; i < grid.size(); i++) {
13            int prefix = grid[i][0];
14            for (int j = 1; j < grid[0].size(); j++) {
15                grid[i][j] = grid[i][j] + prefix;
16                prefix = grid[i][j];
17            }
18        }
19
20        return grid;
21    }
22
23 
24
25    int sumRegion(int row1, int col1, int row2, int col2) {
26
27        int ans = 0;
28
29        for (int i = row1; i <= row2; i++) {
30            int sub = 0;
31
32            if (col1 - 1 >= 0) {
33                sub = grid[i][col1 - 1];
34            }
35            ans += grid[i][col2] - sub;
36        }
37
38        return ans;
39    }
40};
41
42/**
43 * Your NumMatrix object will be instantiated and called as such:
44 * NumMatrix* obj = new NumMatrix(matrix);
45 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
46 */
47