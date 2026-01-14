1class Solution {
2public:
3    int largestSumAfterKNegations(vector<int>& nums, int k) {
4
5        sort(nums.begin(), nums.end());
6        int zero = 0;
7        int neg = 0;
8        for (int i = 0; i < nums.size(); i++) {
9            if (nums[i] < 0 && k > 0) {
10                nums[i] = -nums[i];
11                k--;
12            }
13        }
14
15        if (k % 2 == 0 || zero > 0) {
16            return accumulate(nums.begin(), nums.end(), 0);
17        }
18        sort(nums.begin(), nums.end());
19        nums[0] = -nums[0];
20        return accumulate(nums.begin(), nums.end(), 0);
21    }
22};