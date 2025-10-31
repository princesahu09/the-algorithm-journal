class Solution {
public:
int solve(int n,vector<int>&dp,int i,string s)
{

    if(i==n)return 1;
    if(s[i]=='0')return 0;
    if(dp[i]!=-1)return dp[i];
    int ways=0;
     ways+=solve(n,dp,i+1,s);
    if(i+1<n)
    {
        int num=(s[i]-'0')*10+(s[i+1]-'0');
        if(num>=10&&num<=26)
        {
            ways+=solve(n,dp,i+2,s);
        }
    }
    return dp[i]=ways;
}
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        

        return solve(s.size(),dp,0,s);
    }
};