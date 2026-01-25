1class Solution {
2public:
3    int minimumPrefixLength(vector<int>& nums) {
4
5        const int n=nums.size();
6        int counter=0;
7
8        for(int i=n-1;i>0;i--)
9        {
10            if(nums[i]>nums[i-1])counter++;
11            else break;
12            
13        }
14        return  n-counter-1;
15    }
16};