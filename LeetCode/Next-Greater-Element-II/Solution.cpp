1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4
5        nums.insert(nums.end(), nums.rbegin(), nums.rend());
6        const int n = nums.size();
7        const int l = n / 2;
8        vector<int> ans(l, 0);
9        stack<int> s;
10
11        for (int i = n - 1; i >= 0; i--) {
12
13            while (s.size() > 0 && nums[i % l] >= nums[s.top()]) {
14                s.pop();
15            }
16
17            ans[i % l] = s.size() == 0 ? -1 : nums[s.top()];
18            s.push(i % l);
19        }
20
21        return ans;
22    }
23};