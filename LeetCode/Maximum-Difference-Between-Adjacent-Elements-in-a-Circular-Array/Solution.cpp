1class Solution {
2public:
3    int maxAdjacentDistance(vector<int>& nums) {
4
5        int ans=abs(nums.back()-nums.front());
6
7        for(int i=1;i<nums.size();i++)
8        {
9            ans=max(ans,abs(nums[i]-nums[i-1]));
10        }
11        return ans;
12        
13    }
14};