1class Solution {
2public:
3    int triangularSum(vector<int>& nums) {
4
5            vector<int> demo;
6        while (nums.size() != 1) {
7
8            for (int i = 1; i < nums.size(); i++) {
9                int sum = nums[i - 1] + nums[i];
10                demo.push_back(sum % 10);
11            }
12
13            nums = demo;
14            demo.clear();
15        }
16        return nums[0];
17    }
18};