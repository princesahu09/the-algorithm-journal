1class Solution {
2public:
3    int absDifference(vector<int>& nums, int k) {
4
5        sort(nums.begin(),nums.end());
6
7        int forward=accumulate(nums.begin(),nums.begin()+k,0);
8        int backward=accumulate(nums.rbegin(),nums.rbegin()+k,0);
9
10        return abs(forward-backward);
11        
12        
13    }
14};