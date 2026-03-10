1class Solution {
2public:
3    bool check(string& temp, int k) {
4        int zero = 0;
5        int one = 0;
6        for (auto& i : temp) {
7            if (i == '0')
8                zero++;
9            else
10                one++;
11        }
12
13        return zero <= k || one <= k;
14    }
15    int countKConstraintSubstrings(string s, int k) {
16        const int n = s.size();
17
18        int ans = 0;
19        for (int i = 0; i < n; i++) {
20            for (int j = i; j < n; j++) {
21                string temp = s.substr(i, j - i + 1);
22                if (check(temp, k)) {
23                    ans++;
24                }
25            }
26        }
27        return ans;
28    }
29};