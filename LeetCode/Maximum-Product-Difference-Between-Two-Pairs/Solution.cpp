1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        const int n=nums.size();
6
7        int max= nums[n-1]*nums[n-2]-nums[0]*nums[1];return max;
8        
9    }
10};