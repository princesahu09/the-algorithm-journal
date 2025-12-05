1class Solution {
2public:
3    int triangularSum(vector<int>& nums) {
4
5        while (nums.size() != 1) {
6            vector<int> demo;
7
8            for (int i = 1; i < nums.size(); i++) {
9                int sum = nums[i - 1] + nums[i];
10                demo.push_back(sum % 10);
11            }
12            nums = demo;
13        }
14        return nums[0];
15    }
16};