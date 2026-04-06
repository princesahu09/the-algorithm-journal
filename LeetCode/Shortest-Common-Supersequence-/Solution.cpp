1class Solution {
2public:
3    string shortestCommonSupersequence(string str1, string str2) {
4
5        int m = str1.size();
6
7        int n = str2.size();
8
9        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
10
11        dp[0][0] = 0;
12
13        for (int i = 1; i < m + 1; i++) {
14            for (int j = 1; j < n + 1; j++) {
15
16                if (str1[i - 1] == str2[j - 1]) {
17                    dp[i][j] = dp[i - 1][j - 1] + 1;
18                } else {
19                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
20                }
21            }
22        }
23        string ans = "";
24        int i=m;
25        int j=n;
26
27        while (i > 0 && j > 0) {
28            if (str1[i - 1] == str2[j - 1]) {
29                ans.push_back(str1[i-1]);
30                i--;
31                j--;
32            } else {
33
34                if (dp[i][j - 1] > dp[i-1 ][j]) {
35                    ans.push_back(str2[j - 1]);
36                    j--;
37                } else {
38                    ans.push_back(str1[i - 1]);
39                    i--;
40                }
41                
42               
43            }
44        }
45        while (i > 0) {
46            ans.push_back(str1[i - 1]);
47            i--;
48        }
49        while (j > 0) {
50            ans.push_back(str2[j - 1]);
51            j--;
52        }
53        reverse(ans.begin(), ans.end());
54        return ans;
55    }
56};