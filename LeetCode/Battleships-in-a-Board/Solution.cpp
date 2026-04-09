1class Solution {
2public:
3    void dfs(vector<vector<char>>& board, int row, int col,
4             vector<vector<bool>>& visited) {
5
6        if (row >= board.size() || col >= board[0].size() || row < 0 ||
7            col < 0 || visited[row][col] || board[row][col] == '.') {
8            return;
9        }
10        visited[row][col] = true;
11        dfs(board, row + 1, col, visited);
12        dfs(board, row - 1, col, visited);
13        dfs(board, row, col - 1, visited);
14        dfs(board, row, col + 1, visited);
15    }
16    int countBattleships(vector<vector<char>>& board) {
17
18        const int m = board.size();
19        const int n = board[0].size();
20
21        vector<vector<bool>> visited(m, vector<bool>(n, false));
22
23        int ans = 0;
24
25        for (int i = 0; i < m; i++) {
26
27            for (int j = 0; j < n; j++) {
28
29                if (board[i][j] == 'X' && !visited[i][j]) {
30
31                    dfs(board, i, j, visited);
32                    ans++;
33                }
34            }
35        }
36
37        return ans;
38    }
39};