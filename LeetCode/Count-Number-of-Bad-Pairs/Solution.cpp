1class Solution {
2public:
3    long long countBadPairs(vector<int>& nums) {
4        long long total = 0;
5        int n = nums.size();
6
7        for (int i = 0; i < n; i++) {
8            nums[i] -= i;
9        }
10        total = (long long)n * (n - 1) / 2;
11        long long good = 0;
12
13        unordered_map<long long, long long > freq;
14        for (auto& i : nums) {
15            freq[i]++;
16        }
17        for (auto& i : freq) {
18            long long  f = i.second;
19            if (f < 2) {
20                continue;
21            }
22
23            good += (long long)(f * (f - 1) / 2);
24        }
25
26        return total - good;
27    }
28};