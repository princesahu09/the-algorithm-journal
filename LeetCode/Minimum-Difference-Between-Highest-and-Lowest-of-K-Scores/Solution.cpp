1class Solution {
2public:
3    int minimumDifference(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5
6        const int n = nums.size();
7        int ans = INT_MAX;
8
9        for (int i = 0; i+k-1 < n; i++) {
10            ans=min(ans,nums[i+k-1]-nums[i]);
11            
12        }
13
14        return ans;
15    }
16};