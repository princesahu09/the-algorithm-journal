1class Solution {
2    public int minNumberOperations(int[] target) {
3
4        int ans = target[0];
5
6        for (int i = 1; i < target.length; i++) {
7
8            if (target[i] > target[i - 1]) {
9                ans += (target[i] - target[i - 1]);
10            }
11        }
12
13        return ans;
14
15    }
16}