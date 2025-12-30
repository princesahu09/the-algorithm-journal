1class Solution {
2public:
3    int distinctAverages(vector<int>& nums) {
4
5        set<pair<int,int>>avg;
6        sort(nums.begin(),nums.end());
7        int start=0;
8        int end=nums.size()-1;
9
10
11        while(start < end)
12        {
13           int sum=nums[start]+nums[end];
14           avg.insert({sum/2,sum%2});
15           start++;end--;
16
17        }
18
19        return avg.size();
20
21
22        
23        
24    }
25};