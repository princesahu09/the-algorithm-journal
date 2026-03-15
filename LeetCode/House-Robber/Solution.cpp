1class Solution {
2public:
3    int rob(vector<int>& nums) {
4
5        const int n = nums.size();
6
7        vector<int> t(n);
8
9        if (n < 2) {
10            return nums.front();
11        }
12
13        t[0] = nums[0];
14        t[1] = max(nums[0], nums[1]);
15
16        for (int i = 2; i < n; i++) {
17            t[i] = max(nums[i] + t[i - 2], t[i - 1]);
18        }
19        return t[n - 1];
20    }
21};