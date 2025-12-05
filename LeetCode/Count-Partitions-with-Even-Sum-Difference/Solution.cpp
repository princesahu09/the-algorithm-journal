1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4
5        const int sum = accumulate(nums.begin(), nums.end(), 0);
6        int left = 0;
7        int right = sum;
8
9        int ans = 0;
10
11        for (int i = 0; i < nums.size() - 1; i++) {
12
13            left += nums[i];
14            right -= nums[i];
15            if (!((left-right)&1)) {
16                ans++;
17            }
18        }
19
20        return ans;
21    }
22};