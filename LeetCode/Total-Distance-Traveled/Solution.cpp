1class Solution {
2public:
3    int distanceTraveled(int m, int a) {
4
5        int ans = 0;
6
7        while (m >=5) {
8            ans += (5 * 10);
9            m -= 5;
10
11            if (a >0) {
12                m++;
13                a--;
14            }
15        }
16
17        ans+=(m*10);
18
19        return ans;
20    }
21};