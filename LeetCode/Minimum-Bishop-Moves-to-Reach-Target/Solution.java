1class Solution {
2
3    class Chess {
4        int row;
5        int col;
6        int move;
7
8        Chess(int row, int col, int move) {
9            this.row = row;
10            this.col = col;
11            this.move = move;
12        }
13    }
14
15    public int minBishopMoves(int[] source, int[] target) {
16
17        target[0] -= 1;
18        target[1] -= 1;
19        source[0] -= 1;
20        source[1] -= 1;
21        Queue<Chess> q = new ArrayDeque<>();
22        boolean[][] visited = new boolean[8][8];
23        q.offer(new Chess(source[0], source[1], 0));
24        visited[source[0]][source[1]] = true;
25        int ans = Integer.MAX_VALUE;
26
27        while (!q.isEmpty()) {
28
29            Chess node = q.poll();
30            int row = node.row;
31            int col = node.col;
32            int move = node.move;
33            if (row == target[0] && col == target[1]) {
34                ans = Math.min(ans, move);
35            }
36
37            int r = row - 1;
38            int c = col - 1;
39            while (r >= 0 && c >= 0) {
40                if (!visited[r][c]) {
41                    visited[r][c] = true;
42                    q.offer(new Chess(r, c, move + 1));
43                }
44                r--;
45                c--;
46            }
47            r = row - 1;
48            c = col + 1;
49            while (c < 8 && r >= 0) {
50                if (!visited[r][c]) {
51                    visited[r][c] = true;
52                    q.offer(new Chess(r, c, move + 1));
53                }
54                r--;
55                c++;
56            }
57            r = row + 1;
58            c = col - 1;
59            while (r < 8 && c >= 0) {
60                if (!visited[r][c]) {
61                    visited[r][c] = true;
62                    q.offer(new Chess(r, c, move + 1));
63                }
64                r++;
65                c--;
66            }
67            r = row + 1;
68            c = col + 1;
69            while (r < 8 && c < 8) {
70                if (!visited[r][c]) {
71                    visited[r][c] = true;
72                    q.offer(new Chess(r, c, move + 1));
73                }
74                r++;
75                c++;
76            }
77
78        }
79
80        return ans == Integer.MAX_VALUE ? -1 : ans;
81
82    }
83}