1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) {
4        const int n = nums.size();
5
6        int high = INT_MIN;
7        int low = INT_MAX;
8        int maxIdx = -1;
9        int minIdx = -1;
10
11        for (int i = 0; i < n; i++) {
12            if (nums[i] > high) {
13                high = nums[i];
14                maxIdx = i;
15            }
16            if (nums[i] < low) {
17                low = nums[i];
18                minIdx = i;
19            }
20        }
21
22        int left = max(maxIdx, minIdx) + 1;  
23        int right = n - min(maxIdx, minIdx);  
24        int both = min(maxIdx, minIdx) + 1 + (n - max(maxIdx, minIdx));
25
26        return min({left, right, both});
27    }
28};
29