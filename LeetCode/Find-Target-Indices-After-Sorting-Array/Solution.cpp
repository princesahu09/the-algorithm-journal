1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4
5        sort(nums.begin(),nums.end());
6        const int n=nums.size();
7        vector<int>ans;
8        for(int i=0;i<n;i++)
9        {
10            if(nums[i]==target)
11            {
12                ans.push_back(i);
13            }
14        }
15        return ans;
16        
17    }
18};