1class Solution {
2public:
3    int finalPositionOfSnake(int n, vector<string>& commands) {
4
5        int row = 0;
6        int col = 0;
7        for (auto &i : commands) {
8            if (i == "UP") {
9                row--;
10
11            } else if (i == "DOWN") {
12                row++;
13            } else if (i == "RIGHT") {
14                col++;
15            } else {
16                col--;
17            }
18        }
19
20        return row*n+col;
21    }
22};