1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4
5        const int n = nums.size();
6
7        vector<int> ans(n, 1);
8        for (int i = 1; i < n; i++) {
9            ans[i] = ans[i - 1] * nums[i - 1];
10        }
11        int suffix = 1;
12        for (int i = n - 2; i >= 0; i--) {
13            suffix = suffix * nums[i + 1];
14            ans[i] *= suffix;
15        }
16        return ans;
17    }
18};