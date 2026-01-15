1class Solution {
2public:
3    int solve(vector<vector<char>>& board, int row, int col) {
4        int ans = 0;
5        // row forward
6        for (int i = col + 1; i < 8; i++) {
7
8            if (board[row][i] == 'p') {
9                ans++;
10                break;
11            } else if (board[row][i] == 'B') {
12                break;
13            } else {
14                continue;
15            }
16        }
17        // row backward
18        for (int i = col - 1; i >= 0; i--) {
19            if (board[row][i] == 'p') {
20                ans++;
21                break;
22            } else if (board[row][i] == 'B') {
23                break;
24            } else {
25                continue;
26            }
27        }
28        // columne upward
29
30        for (int i = row - 1; i >= 0; i--) {
31
32            if (board[i][col] == 'p') {
33                ans++;
34                break;
35            } else if (board[i][col] == 'B') {
36                break;
37            } else {
38                continue;
39            }
40        }
41        // column downward
42
43        for (int i = row; i < 8; i++) {
44            if (board[i][col] == 'p') {
45                ans++;
46                break;
47            } else if (board[i][col] == 'B') {
48                break;
49            } else {
50                continue;
51            }
52        }
53
54        return ans;
55    }
56    int numRookCaptures(vector<vector<char>>& board) {
57
58        int ans = 0;
59
60        for (int i = 0; i < 8; i++) {
61
62            for (int j = 0; j < 8; j++) {
63                if (board[i][j] == 'R')
64
65                {
66                    ans += solve(board, i, j);
67                }
68            }
69        }
70
71        return ans;
72    }
73};