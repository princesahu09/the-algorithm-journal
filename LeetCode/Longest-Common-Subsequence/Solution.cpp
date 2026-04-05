1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4
5        int n=text1.size();
6        int m=text2.size();
7
8        vector<vector<int>>dp(n+1,vector<int>(m+1));
9
10        dp[0][0]=0;
11
12        for(int i=1;i<n+1;i++)
13        {
14            dp[i][0]=0;
15        }
16
17        for(int j=1;j<m+1;j++)
18        {
19            dp[0][j]=0;
20        }
21
22
23        for(int i=1;i<n+1;i++)
24        {
25
26
27            for(int j=1;j<m+1;j++)
28            {
29                
30
31                if(text1[i-1]==text2[j-1])
32                {
33                    dp[i][j]=1+dp[i-1][j-1];
34                }
35                else
36                {
37                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
38                }
39            }
40        }
41        return dp[n][m];
42
43
44        
45    }
46};