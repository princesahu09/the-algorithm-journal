1class Solution {
2public:
3    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
4
5        int n = nums.size();
6
7        vector<long long> prefix(n, 0LL);
8        vector<int> ans(n, 0);
9        prefix[0] = nums[0];
10
11        for (int i = 1; i < n; i++) {
12            prefix[i] = nums[i] + prefix[i - 1];
13        }
14
15        long long total = accumulate(nums.begin(), nums.end(), 0LL);
16
17        for (int i = 0; i < n; i++) {
18            int p = 0;
19
20            if (i - 1 >= 0) {
21                p = prefix[i - 1];
22            }
23            int left = i * nums[i] - p;
24            int right = total - p - nums[i] - (n - i - 1) * nums[i];
25            ans[i] = left + right;
26        }
27
28        return ans;
29    }
30};