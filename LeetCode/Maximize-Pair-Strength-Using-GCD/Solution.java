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
12        Arrays.sort(nums);
13
14        long ans = Long.MIN_VALUE;
15
16        for (int i = 0; i < nums.length; i++) {
17            for (int j = i + 1; j < nums.length; j++) {
18
19                int g = gcd(nums[i], nums[j]);
20
21                long x = nums[i] / g;
22                long y = nums[j] / g;
23
24                ans = Math.max(ans, x * y);
25
26            }
27        }
28
29        return ans;
30
31    }
32}