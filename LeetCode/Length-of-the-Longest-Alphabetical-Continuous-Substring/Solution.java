1class Solution {
2    public int longestContinuousSubstring(String s) {
3
4        int low = 0;
5        int ans = 0;
6        int c = 1;
7
8        for (int high = 0; high < s.length(); high++) {
9            if (high > 0 && s.charAt(high - 1) + 1 == s.charAt(high)) {
10                c++;
11            } else {
12                c = 1;
13                low = high;
14
15            }
16
17            ans = Math.max(ans, high - low + 1);
18
19        }
20
21        return ans;
22
23    }
24}