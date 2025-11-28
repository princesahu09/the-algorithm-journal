1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4
5        const int n = nums.size();
6        int start = 0;
7        int end = n -1;
8        int ans = -1;
9
10        while (start <= end) {
11            int mid = start + (end - start) / 2;
12
13            if (nums[mid] == target) {
14                return mid;
15
16            } else if (nums[start] <= nums[mid]) // nums[mid]<=nums[end]
17            {
18
19                if (nums[start] <= target && target < nums[mid]) {
20                    end = mid - 1;
21                } else {
22                    start = mid + 1;
23                }
24
25            } else {
26                if (nums[end] >= target && target > nums[mid]) {
27                    start = mid + 1;
28                } else {
29                    end = mid - 1;
30                }
31            }
32        }
33
34        return ans;
35    }
36};