1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4
5        int start = 0;
6        int end = nums.size() - 1;
7        const int n = nums.size();
8        if (n == 1)
9            return nums[0];
10
11        while (start <= end) {
12            int mid = start + (end - start) / 2;
13
14            if (mid == 0 && nums[0] != nums[1])
15                return nums[mid];
16            if (mid == n - 1 && nums[n - 1] != nums[n - 2])
17                return nums[mid];
18
19            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
20                return nums[mid];
21            } else if (mid % 2 == 0) {
22                if (nums[mid - 1] == nums[mid])
23                    end = mid - 1;
24                else {
25                    start = mid + 1;
26                }
27
28            } else {
29                if (nums[mid - 1] == nums[mid])
30                    start = mid + 1;
31                else {
32                    end = mid - 1;
33                }
34            }
35        }
36
37        return 0;
38    }
39};