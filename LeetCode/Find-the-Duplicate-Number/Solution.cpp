1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow=nums[0];int fast=nums[0];
5
6        do
7        {
8            slow=nums[slow];
9            fast=nums[nums[fast]];
10
11        }
12        while(slow!=fast);
13        slow=nums[0];
14        while(slow!=fast)
15        {
16            slow=nums[slow];
17            fast=nums[fast];
18
19        }
20        return fast;
21        
22    }
23};