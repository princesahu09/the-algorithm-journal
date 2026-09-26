1class Solution {
2    public int minQueenMoves(int[] source, int[] target) {
3
4        if (source[0] == target[0] && source[1] == target[1])
5            return 0;
6
7        if (source[1] == target[1]) {
8            return 1;
9        }
10
11        if (source[0] == target[0]) {
12            return 1;
13        }
14        if (Math.abs(source[0] - target[0]) == Math.abs(source[1] - target[1])) {
15            return 1;
16        }
17
18        return 2;
19
20    }
21}