1class Solution {
2public:
3    int minChanges(int n, int k) {
4
5        int ans = 0;
6
7        while (n > 0 || k > 0) {
8            int r1 = n & 1;
9            int r2 = k & 1;
10
11            if (r1 == 0 && r2 == 1)
12                return -1;
13            else if (r1 == 1 && r2 == 0) {
14                ans++;
15            }
16
17            n >>= 1;
18            k >>= 1;
19        }
20
21        return ans;
22    }
23};