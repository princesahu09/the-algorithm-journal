1class Solution {
2public:
3    int solve(vector<int>& nums, int n,vector<int>&dp) {
4        if (n <= 0) {
5            return 0;
6        }
7
8        if(dp[n]!=-1)
9        {
10            return  dp[n];
11        }
12        dp[n]= max(nums[n - 1] + solve(nums, n - 2,dp), solve(nums, n - 1,dp));
13        return dp[n];
14    }
15    int rob(vector<int>& nums) {
16
17        vector<int>dp(nums.size()+1,-1);
18        
19        
20         return solve(nums, nums.size(),dp); }
21};