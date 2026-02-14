1class Solution {
2public:
3    char processStr(string s, long long k) {
4
5        long long len = 0;
6        for (auto& i : s) {
7            if (i >= 'a' && i <= 'z')
8                len++;
9            if (i == '*') {
10                if (len - 1 >= 0) {
11                    len -= 1;
12                }
13            }
14            if (i == '#') {
15                len *= 2;
16            }
17            if (i == '%') {
18                continue;
19            }
20        }
21
22        if(k>=len)return '.';
23
24        for (int i = s.size() - 1; i >= 0; i--) {
25            if (s[i] >= 'a' && s[i] <= 'z') {
26                if (k == len - 1)
27                    return s[i];
28                else
29                    len--;
30            }
31
32            if (s[i] == '*')
33                len++;
34            if (s[i] == '#') {
35               long long half = len / 2;
36                if (k >= half) k -= half;
37                len = half;
38            }
39            if (s[i] == '%')
40                k = len - 1 - k;
41        }
42
43        return '.';
44    }
45};