1class Solution {
2public:
3    bool check(int a, int b, int c) {
4        if (a + b > c && b + c > a && a + c > b)
5            return true;
6        return false;
7    }
8    int triangleNumber(vector<int>& nums) {
9        int n = nums.size();
10
11        sort(nums.begin(), nums.end());
12
13        int ans = 0;
14
15        for (int k = n - 1; k >= 0; k--) {
16            int i = 0;
17            int j = k - 1;
18
19            while (i < j) {
20                if (nums[i] + nums[j] > nums[k]) {
21                    ans += (j - i);
22                    j--;
23                } else {
24                    i++;
25                }
26            }
27        }
28        return ans;
29    }
30};