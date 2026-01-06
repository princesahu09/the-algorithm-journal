1class Solution {
2public:
3    int unequalTriplets(vector<int>& nums) {
4        const int n = nums.size();
5
6        int ans = 0;
7
8        for (int i = 0; i < n; i++) {
9            for (int j = i + 1; j < n; j++) {
10
11                for (int k = j + 1; k < n; k++) {
12
13                    if (nums[i] != nums[j] && nums[i] != nums[k] &&
14                        nums[j] != nums[k]) {
15                        ans++;
16                    }
17                }
18            }
19        }
20        return ans;
21    }
22};