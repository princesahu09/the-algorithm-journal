1class Solution {
2public:
3    vector<int> constructTransformedArray(vector<int>& nums) {
4
5        const int n = nums.size();
6
7       
8
9        vector<int> ans;
10
11        for (int i = 0; i < n; i++) {
12
13            if (nums[i] > 0) {
14                int idx = (nums[i] + i)%n;
15             
16                ans.push_back(nums[idx]);
17            } else {
18                int idx = (nums[i] + i)%n;
19                if(idx<0)idx+=n;
20                
21                ans.push_back(nums[idx]);
22            }
23        }
24
25        return ans;
26    }
27};