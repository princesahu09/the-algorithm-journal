1class Solution {
2public:
3
4int solve(int row,int col,int m,int n,vector<vector<int>>&dp)
5{
6
7    if(row>=m||col>=n)
8    {
9        return 0;
10    }
11
12    if(row==m-1&&col==n-1)
13    {
14        return 1;
15    }
16    if(dp[row][col]!=-1)
17    {
18        return dp[row][col];
19    }
20
21    return dp[row][col]=solve(row+1,col,m,n,dp)+solve(row,col+1,m,n,dp);
22}
23    int uniquePaths(int m, int n) {
24
25        vector<vector<int>>dp(m,vector<int>(n,-1));
26
27        return solve(0,0,m,n,dp);
28        
29    }
30};