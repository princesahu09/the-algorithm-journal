1class Solution {
2public:
3    bool check(string& s, vector<string>& wordDict) {
4        return binary_search(wordDict.begin(), wordDict.end(), s);
5    }
6    bool solve(string s, int i, int j, vector<string>& wordDict,
7               vector<vector<int>>& dp) {
8        if (i > j) {
9            return true;
10        }
11
12        if (dp[i][j] != -1) {
13            return dp[i][j];
14        }
15        string str = s.substr(i, j - i + 1);
16
17        if (check(str, wordDict)) {
18            return dp[i][j] = true;
19        }
20
21        bool ans = false;
22
23        for (int k = i; k < j; k++) {
24
25            bool left = solve(s, i, k, wordDict, dp);
26
27            if (!left)
28                continue;
29            bool right = solve(s, k + 1, j, wordDict, dp);
30
31            ans = ans || (left && right);
32
33            if (ans)
34                break;
35        }
36
37        return dp[i][j] = ans;
38    }
39    bool wordBreak(string s, vector<string>& wordDict) {
40
41        sort(wordDict.begin(), wordDict.end());
42
43        const int n = s.size();
44
45        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
46
47        return solve(s, 0, s.size() - 1, wordDict, dp);
48    }
49};