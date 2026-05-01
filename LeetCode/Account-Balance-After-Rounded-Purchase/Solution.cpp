1class Solution {
2public:
3    int accountBalanceAfterPurchase(int p) {
4
5        if (p == 0)
6            return 100;
7        if (p == 100)
8            return 0;
9
10        int divider = p / 10;
11        int m = p % 10;
12
13        if (m == 0) {
14            return 100 - p;
15        }
16
17        if (m >= 1 && m < 5)
18            return 100 - divider * 10;
19
20        return 100 - (divider + 1) * 10;
21    }
22};