1class Solution {
2    public int minRotations(String s) {
3
4        int start = 0;
5        int ans = 0;
6
7        for (Character i : s.toCharArray()) {
8            int dest = (int) (i - '0');
9
10            ans += Math.min(Math.abs(dest - start), 10 - Math.abs(dest - start));
11
12            start = dest;
13
14        }
15
16        return ans;
17
18    }
19}