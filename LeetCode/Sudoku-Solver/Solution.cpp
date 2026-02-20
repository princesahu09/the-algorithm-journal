1class Solution {
2public:
3    bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {
4        for (int i = 0; i < 9; i++) {
5            if (board[row][i] == dig)
6                return false;
7        }
8        for (int j = 0; j < 9; j++) {
9            if (board[j][col] == dig)
10                return false;
11        }
12        int srow = (row / 3) * 3;
13        int scol = (col / 3) * 3;
14
15        for (int i = srow; i <= srow+2; i++) {
16
17            for (int j = scol; j <= scol + 2; j++) {
18                if (board[i][j] == dig)
19                    return false;
20            }
21        }
22        return true;
23    }
24
25    bool helper(vector<vector<char>>& board, int row, int col) {
26        if (row == 9) {
27            return true;
28        }
29        int nextRow = row, nextCol = col + 1;
30        if (nextCol == 9) {
31            nextRow = row + 1;
32            nextCol = 0;
33        }
34
35        if (board[row][col] != '.') {
36            return helper(board, nextRow, nextCol);
37        }
38        for (char dig = '1'; dig <= '9'; dig++) {
39            if (isSafe(board, row, col, dig)) {
40                board[row][col] = dig;
41                if (helper(board, nextRow, nextCol)) {
42                    return true;
43                }
44                board[row][col] = '.';
45            }
46        }
47
48        return false;
49    }
50    void solveSudoku(vector<vector<char>>& board) { helper(board, 0, 0); }
51};