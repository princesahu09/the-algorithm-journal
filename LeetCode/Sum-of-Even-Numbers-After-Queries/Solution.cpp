1class Solution {
2public:
3    vector<int> sumEvenAfterQueries(vector<int>& nums,
4                                    vector<vector<int>>& queries) {
5
6        vector<int> ans;
7        for (auto& q : queries) {
8            int val = q[0];
9            int idx = q[1];
10            int sum = 0;
11            for (int i = 0; i < nums.size(); i++) {
12                if (i == idx) {
13                    nums[i] += val;
14                }
15                if (nums[i] % 2 == 0) {
16                    sum += nums[i];
17                }
18            }
19            ans.push_back(sum);
20        }
21
22        return ans;
23    }
24};