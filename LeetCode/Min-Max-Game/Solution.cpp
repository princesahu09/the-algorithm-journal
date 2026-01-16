1class Solution {
2public:
3    int minMaxGame(vector<int>& nums) {
4
5        bool toggle = true;
6
7        vector<int> temp;
8
9        while (nums.size() >1) {
10            int i = 0;
11
12            while (i < nums.size())
13
14            {
15
16                if (toggle) {
17                    temp.push_back(min(nums[i], nums[i + 1]));
18
19                } else {
20                    temp.push_back(max(nums[i], nums[i + 1]));
21                }
22                i += 2;
23                toggle = !toggle;
24            }
25            nums = temp;
26            temp.clear();
27        }
28
29        return nums[0];
30    }
31};