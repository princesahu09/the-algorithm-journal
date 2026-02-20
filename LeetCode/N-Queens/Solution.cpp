1class Solution {
2public:
3    bool isSafe(vector<string>& board, int row, int col, int n) {
4        for (int j = 0; j < n; j++) {
5            if (board[row][j] == 'Q') {
6                return false;
7            }
8        }
9
10        for (int i = 0; i < n; i++) {
11
12            if (board[i][col] == 'Q') {
13                return false;
14            }
15        }
16        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
17            if (board[i][j] == 'Q')
18                return false;
19        }
20        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
21            if (board[i][j] == 'Q')
22                return false;
23        }
24        return true;
25    }
26
27    void nQueens(vector<string>& board, int row, int n,
28                 vector<vector<string>>& ans) {
29        if (row == n) {
30            ans.push_back(board);
31            return;
32        }
33        for (int i = 0; i < n; i++) {
34            if (isSafe(board, row, i, n)) {
35                board[row][i] = 'Q';
36                nQueens(board, row + 1, n, ans);
37                board[row][i] = '.';
38            }
39        }
40    }
41
42    vector<vector<string>> solveNQueens(int n) {
43
44        vector<vector<string>> ans;
45
46        vector<string> board(n, string(n, '.'));
47
48        nQueens(board, 0, n, ans);
49        return ans;
50    }
51};