1class Solution {
2public:
3    int countTriples(int n) {
4        int ans = 0;
5
6        for (int a = 1; a <= n; a++) {
7            for (int b =  1; b <= n; b++) {
8                for (int c =  1; c <= n; c++) {
9                    if (a * a + b * b == c * c) {
10                        ans++;
11                    }
12                }
13            }
14        }
15
16        return ans;
17    }
18};
19