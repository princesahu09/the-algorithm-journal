1class Solution {
2public:
3    vector<int> findIndices(vector<int>& nums, int indexDifference,
4                            int valueDifference) {
5
6                                int n=nums.size();
7
8        for (int i = 0; i < n; i++) {
9            for (int j = 0; j < n; j++) {
10                int idx = abs(i - j);
11                int v = abs(nums[i] - nums[j]);
12
13                if (idx >= indexDifference && v >= valueDifference) {
14                    return {i, j};
15                }
16            }
17        }
18        return {-1, -1};
19    }
20};