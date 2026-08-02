1class Solution {
2
3    int gcd(int a, int b) {
4        if (b == 0) {
5            return a;
6        }
7        return gcd(b, a % b);
8    }
9
10    public long maxPairStrength(int[] nums) {
11
12        long ans = Long.MIN_VALUE;
13
14        for (int i = 0; i < nums.length; i++) {
15            for (int j = i + 1; j < nums.length; j++) {
16
17                int g = gcd(nums[i], nums[j]);
18
19                long x = nums[i] / g;
20                long y = nums[j] / g;
21
22                ans = Math.max(ans, x * y);
23
24            }
25        }
26
27        return ans;
28
29    }
30}