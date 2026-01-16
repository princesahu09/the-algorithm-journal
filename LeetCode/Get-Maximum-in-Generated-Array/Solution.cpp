1class Solution {
2public:
3    int getMaximumGenerated(int n) {
4
5        if(n==0)return 0;
6
7        vector<int> nums(n + 1, 0);
8        nums[0] = 0;
9        nums[1] = 1;
10
11        int i = 1;
12        while (i <= n) {
13            if (2 * i <= n) {
14                nums[2 * i] = nums[i];
15            }
16            if (2 * i +1 <= n )
17
18            {
19                nums[2 * i + 1] = nums[i] + nums[i + 1];
20            }
21            i++;
22        }
23
24        return *max_element(nums.begin(), nums.end());
25    }
26};