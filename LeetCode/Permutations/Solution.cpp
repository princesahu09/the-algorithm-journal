1class Solution {
2public:
3void solve(vector<int>&nums,int idx,vector<vector<int>>&ans)
4{
5    if(idx==nums.size())
6    {
7        ans.push_back(nums);
8    }
9    for(int i=idx;i<nums.size();i++)
10    {
11        swap(nums[idx],nums[i]);
12        solve(nums,idx+1,ans);
13        swap(nums[idx],nums[i]);
14    }
15}
16    vector<vector<int>> permute(vector<int>& nums) {
17        vector<vector<int>>ans;
18        solve(nums,0,ans);
19        return ans;
20        
21    }
22};