1class Solution {
2    boolean vowel(char ch) {
3        return ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u';
4    }
5
6    public int maxVowels(String s, int k) {
7        int low = 0;
8
9        int v = 0;
10
11        int ans = 0;
12
13        for (int high = 0; high < s.length(); high++) {
14            if (vowel(s.charAt(high))) {
15                v++;
16            }
17            while (high - low + 1 > k) {
18                if (vowel(s.charAt(low))) {
19                    v--;
20                }
21                low++;
22            }
23
24            ans = Math.max(ans, v);
25        }
26
27        return ans;
28
29    }
30}