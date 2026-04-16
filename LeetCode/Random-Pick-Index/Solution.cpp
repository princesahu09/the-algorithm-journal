1class Solution {
2public:
3    
4        unordered_map<int,vector<int>>mp;
5    Solution(vector<int>& nums) { 
6
7        for(int i=0;i<nums.size();i++)
8        {
9            mp[nums[i]].push_back(i);
10        }
11     }
12
13    int pick(int target) {
14
15
16        auto vec=mp[target];
17
18        int ans=rand()%(vec.size());
19
20        
21
22
23        
24        return vec[ans];
25    }
26};
27
28/**
29 * Your Solution object will be instantiated and called as such:
30 * Solution* obj = new Solution(nums);
31 * int param_1 = obj->pick(target);
32 */