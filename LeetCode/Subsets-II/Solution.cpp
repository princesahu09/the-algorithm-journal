1class Solution {
2public:
3    void solve(int idx, vector<int>& nums, vector<vector<int>>& ans,
4               vector<int> temp) {
5        ans.push_back(temp);
6        for (int i = idx; i < nums.size(); i++)
7
8        {
9
10            if (i > idx && nums[i] == nums[i - 1]) {
11                continue;
12            }
13
14            temp.push_back(nums[i]);
15            solve(i+1,nums, ans, temp);
16            temp.pop_back();
17        }
18    }
19    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
20        sort(nums.begin(), nums.end());
21
22        vector<vector<int>> ans;
23        solve(0, nums, ans, {});
24
25        return ans;
26    }
27};