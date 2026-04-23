1class Solution {
2public:
3    const int MOD = 1e9 + 7;
4
5    int reverse(int num) {
6        int ans = 0;
7        while (num > 0) {
8            ans = ans * 10 + (num % 10);
9            num /= 10;
10        }
11
12        return ans;
13    }
14    int countNicePairs(vector<int>& nums) {
15
16        for (int i = 0; i < nums.size(); i++) {
17            nums[i] -= reverse(nums[i]);
18        }
19
20        int ans = 0;
21
22        unordered_map<int, int> freq;
23        for (auto& i : nums) {
24            freq[i]++;
25        }
26
27        for (auto& i : freq) {
28            long long f = i.second;
29
30            long long p =(f * (f - 1) / 2)%MOD;
31            ans = (ans + p) % MOD;
32        }
33
34        return ans;
35    }
36};