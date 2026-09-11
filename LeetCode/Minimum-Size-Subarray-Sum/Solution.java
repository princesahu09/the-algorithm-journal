1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4
5        int ans = INT_MAX;
6
7        int start = 0;
8        int sum = 0;
9
10        for (int i = 0; i < nums.size(); i++) {
11            sum += nums[i];
12
13            while (sum >= target) {
14                ans = min(ans, i - start + 1);
15
16                sum -= nums[start];
17                start++;
18            }
19        }
20
21        return ans == INT_MAX ? 0 : ans;
22    }
23};