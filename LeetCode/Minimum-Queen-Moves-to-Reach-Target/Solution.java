1class Solution {
2    public int minQueenMoves(int[] source, int[] target) {
3
4        if (source[0] == target[0] && source[1] == target[1])
5            return 0;
6
7        else if (source[1] == target[1]) {
8            return 1;
9        }
10
11        else if (source[0] == target[0]) {
12            return 1;
13        } else if (Math.abs(source[0] - target[0]) == Math.abs(source[1] - target[1])) {
14            return 1;
15        }
16
17        return 2;
18
19    }
20}