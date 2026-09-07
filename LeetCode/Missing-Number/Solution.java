1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int ans=0;
5
6        for(auto i:nums)
7        {
8            ans^=i;
9
10        }
11        for(int i=1;i<nums.size()+1;i++)
12        {
13            ans^=i;
14        }
15        return ans;
16        
17    }
18};