1class Solution {
2public:
3    bool solve(int n) {
4        int digit = 0;
5        int sq = 0;
6        while (n > 0) {
7            int r = n % 10;
8            digit += r;
9            sq += (r * r);
10            n /= 10;
11        }
12        return sq - digit >= 50;
13    }
14    bool checkGoodInteger(int n) { return solve(n); }
15};