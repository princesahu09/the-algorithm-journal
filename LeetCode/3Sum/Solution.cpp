1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<vector<int>> ans;
7        const int n = nums.size();
8
9        for (int i = 0; i < nums.size(); i++) {
10            if (i > 0 && nums[i] == nums[i - 1])
11                continue;
12            int j = i + 1;
13            int k = n - 1;
14            while (j < k) {
15
16                int sum = nums[j] + nums[k] + nums[i];
17                if (sum < 0) {
18                    j++;
19                } else if (sum > 0) {
20                    k--;
21                } else {
22
23                    ans.push_back({nums[i], nums[j], nums[k]});
24                    j++;
25                    k--;
26                    while(j<k&&nums[j]==nums[j-1])j++;
27                    while(j<k&&nums[k]==nums[k+1])k--;
28                }
29            }
30        }
31        return ans;
32    }
33};