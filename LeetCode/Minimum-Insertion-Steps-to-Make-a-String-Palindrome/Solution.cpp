1class Solution {
2public:
3    int minInsertions(string s) {
4
5        int n=s.size();
6        string temp(s.rbegin(),s.rend());
7
8        vector<vector<int>>dp(n+1,vector<int>(n+1));
9
10        dp[0][0]=0;
11
12        for(int i=1;i<n+1;i++)
13        {
14
15
16            for(int j=1;j<n+1;j++)
17            {
18
19
20                if(s[i-1]==temp[j-1])
21                {
22                    dp[i][j]=dp[i-1][j-1]+1;
23                }
24
25                else
26                {
27                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
28                }
29            }
30        }
31
32
33        return n-dp[n][n];
34
35        
36    }
37};