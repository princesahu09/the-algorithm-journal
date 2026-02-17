1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4
5        const int n = nums.size();
6        int pivot = -1;
7        for (int i = n - 2; i >=0; i--) {
8            if (nums[i] < nums[i + 1]) {
9                pivot = i;
10                break;
11            }
12        }
13
14        if (pivot == -1) {
15            reverse(nums.begin(), nums.end());
16            return;
17        }
18        for (int i = n - 1; i >= 0; i--) {
19            if (nums[i] > nums[pivot]) {
20                swap(nums[i], nums[pivot]);
21                break;
22            }
23        }
24        reverse(nums.begin() + pivot + 1, nums.end());
25    }
26};