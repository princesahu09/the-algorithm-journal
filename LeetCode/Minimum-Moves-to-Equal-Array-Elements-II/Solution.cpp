1class Solution {
2public:
3    int minMoves2(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        const int n=nums.size();
7     
8
9     
10        int move=0;
11
12        for(auto &i:nums)
13        {
14            move+=abs(i-nums[n/2]);
15        }
16        return move;
17        
18    }
19};