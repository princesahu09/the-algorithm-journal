1class Solution {
2public:
3    int maxDistance(string moves) {
4
5        int x = 0;
6        int y = 0;
7        int dash = 0;
8
9        for (auto i : moves) {
10            if (i == 'U') {
11                y++;
12            } else if (i == 'D') {
13                y--;
14            } else if (i == 'R') {
15                x++;
16            } else if (i == 'L') {
17                x--;
18            } else {
19                dash++;
20            }
21        }
22
23        return abs(x) + abs(y) + dash;
24    }
25};