1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        const int n = nums.size();
5        vector<int> ans;
6        deque<int> dq;
7
8        for (int i = 0; i < k; i++) {
9            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
10                dq.pop_back();
11            }
12            dq.push_back(i);
13        }
14
15        for (int i = k; i < n; i++) {
16            ans.push_back(nums[dq.front()]);
17            while (dq.size() > 0 && dq.front() <= i - k) {
18                dq.pop_front();
19            }
20
21            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
22                dq.pop_back();
23            }
24
25            dq.push_back(i);
26        }
27        ans.push_back(nums[dq.front()]);
28        return ans;
29    }
30};