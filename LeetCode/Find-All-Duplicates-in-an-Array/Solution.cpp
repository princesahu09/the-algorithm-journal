1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4
5        vector<int> ans;
6        int n = *max_element(nums.begin(), nums.end());
7
8        vector<int> freq(n + 1, 0);
9        for (auto& i : nums) {
10            freq[i]++;
11        }
12
13        for (int i = 0; i <= n; i++) {
14            if (freq[i] == 2) {
15                ans.push_back(i);
16            }
17        }
18
19        return ans;
20    }
21};