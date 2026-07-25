1class Solution {
2    int bits(int n) {
3        int counter = 0;
4        while (n > 0) {
5            counter++;
6            n >>= 1;
7        }
8        return counter;
9    }
10
11    public int uniqueXorTriplets(int[] nums) {
12        int n = nums.length;
13
14        if (n == 1 || n == 2)
15            return n;
16
17        return 1 << (bits(n));
18
19    }
20}