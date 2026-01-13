1class Solution {
2public:
3    int minimumOperations(vector<vector<int>>& grid) {
4
5        int row = grid.size();
6        int col = grid[0].size();
7        int ans = 0;
8
9            for (int j = 0; j < col; j++) {
10
11            for (int i = 1; i < row; i++) {
12                
13
14                if (grid[i-1][j] >= grid[i][j]) {
15                    int move = grid[i-1][j] - grid[i][j] + 1;
16                    grid[i][j] += move;
17                    ans += move;
18                }
19            }
20        }
21
22        return ans;
23    }
24};