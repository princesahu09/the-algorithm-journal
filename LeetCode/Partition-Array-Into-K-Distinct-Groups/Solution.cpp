1class Solution {
2public:
3    bool partitionArray(vector<int>& nums, int k) {
4
5        const int n = nums.size();
6        if (n % k != 0)
7            return false;
8
9        unordered_map<int, int> freq;
10
11        for (auto& i : nums) {
12            freq[i]++;
13        }
14        int g = n / k;
15
16        for (auto& i : freq) {
17            if (i.second > g)
18                return false;
19        }
20        return true;
21    }
22};