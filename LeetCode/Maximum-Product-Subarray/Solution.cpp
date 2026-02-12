1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4
5
6       int ans=nums[0];
7       int currMax=nums[0];
8       int currMin=nums[0];
9
10        for(int i=1;i<nums.size();i++)
11        {
12
13            if(nums[i]<0)
14            {
15                swap(currMax,currMin);
16            }
17            currMax=max(currMax*nums[i],nums[i]);
18            currMin=min(currMin*nums[i],nums[i]);
19            ans=max(ans,currMax);
20        }
21
22
23        return ans;
24        
25    }
26};