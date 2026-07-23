1class Solution {
2    public int appendCharacters(String s, String t) {
3        int i = 0;
4        int j = 0;
5
6        while (i < s.length() && j < t.length()) {
7
8            if (s.charAt(i) == t.charAt(j)) {
9                i++;
10                j++;
11            } else {
12                i++;
13            }
14        }
15
16        return t.length() - j;
17
18    }
19}