1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4
5        int x = 0;
6        for (auto& i : nums) {
7            x ^= i;
8        }
9        int count = 0;
10
11        while (x > 0 || k > 0) {
12            int r = x & 1;
13            int n = k & 1;
14            if (r != n) {
15                count++;
16            }
17            x >>= 1;
18            k >>= 1;
19        }
20        return count;
21    }
22};