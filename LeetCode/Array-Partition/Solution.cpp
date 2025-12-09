1class Solution {
2public:
3    int arrayPairSum(vector<int>& nums) {
4
5        sort(nums.begin(),nums.end());
6
7        int ans=0;
8
9        for(int i=0;i<nums.size();i+=2)
10        {
11            ans+=nums[i];
12           
13            
14        }
15        return ans;
16        
17    }
18};