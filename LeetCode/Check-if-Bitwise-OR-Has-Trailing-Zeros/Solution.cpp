1class Solution {
2public:
3    bool hasTrailingZeros(vector<int>& nums) {
4        int even=0;
5
6        for(auto &i:nums)
7        {
8            if((i&1)==0)
9            {
10                even++;
11            }
12        }
13
14       
15
16        return even>=2?true:false;
17    }
18};