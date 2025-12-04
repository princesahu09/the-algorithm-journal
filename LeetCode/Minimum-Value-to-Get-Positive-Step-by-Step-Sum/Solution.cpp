1class Solution {
2public:
3    int minStartValue(vector<int>& nums) {
4        int ans=INT_MAX;
5        int start=0;
6
7        for(int i=0;i<nums.size();i++)
8        {
9            start+=nums[i];
10           
11            ans=min(ans,start);
12
13        }
14
15        if(ans<=0)
16        {
17            return 1-ans;
18        }
19        return 1;
20        
21    }
22};