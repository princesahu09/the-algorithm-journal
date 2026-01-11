1class Solution {
2public:
3    int residuePrefixes(string s) {
4
5        int bitmask = 0;
6        int distinct = 0;
7        int ans = 0;
8
9        for (int i = 0; i < s.size(); i++) {
10
11            char ch = s[i];
12            if ((bitmask & (1 << (ch - 'a'))) == 0) {
13                bitmask |= (1 << (ch - 'a'));
14                distinct++;
15            }
16
17            if (distinct == (i + 1) % 3)
18                ans++;
19        }
20        return ans;
21    }
22};