1class Solution {
2    public int minBishopMoves(int[] source, int[] target) {
3
4        int sr = source[0];
5        int sc = source[1];
6        int tr = target[0];
7        int tc = target[1];
8        if (sr == tr && sc == tc)
9            return 0;
10
11        if ((sr + sc) % 2 != (tr + tc) % 2)
12            return -1;
13        if (Math.abs(sr - tr) == Math.abs(tc - sc))
14            return 1;
15
16        return 2;
17
18    }
19}