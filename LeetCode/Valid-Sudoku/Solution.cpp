1class Solution {
2public:
3    bool check(vector<vector<char>>& board, char ch, int row, int col, int n) {
4
5        for (int i = 0; i < n; i++) {
6            if (board[row][i] == '.')
7                continue;
8            if (i != col && board[row][i] == ch)
9                return false;
10        }
11        for (int j = 0; j < n; j++) {
12            if (board[j][col] == '.')
13                continue;
14            if (j != row && board[j][col] == ch)
15                return false;
16        }
17
18        return true;
19    }
20
21    bool matcheck(vector<vector<char>>& board, char ch, int row, int col,
22                  int n) {
23        int r = (row / 3) * 3;
24        int c = (col / 3) * 3;
25
26        for (int i = r; i <= r + 2; i++) {
27            for (int j = c; j <= c + 2; j++) {
28                if (board[i][j] == '.')
29                    continue;
30                if ((i != row || j != col) && board[i][j] == ch) {
31                    return false;
32                }
33            }
34        }
35
36        return true;
37    }
38    bool isValidSudoku(vector<vector<char>>& board) {
39
40        const int n = board.size();
41
42        for (int i = 0; i < n; i++) {
43            for (int j = 0; j < n; j++) {
44
45                if (board[i][j] == '.')
46                    continue;
47                if (!check(board, board[i][j], i, j, n))
48                    return false;
49                if (!matcheck(board, board[i][j], i, j, n))
50                    return false;
51            }
52        }
53
54        return true;
55    }
56};