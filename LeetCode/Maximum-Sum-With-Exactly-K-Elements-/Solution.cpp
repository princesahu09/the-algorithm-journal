1class Solution {
2public:
3    int maximizeSum(vector<int>& nums, int k) {
4        
5
6        sort(nums.begin(),nums.end());
7        int ans=0;
8        int last=nums.back();
9        while(k--)
10        {
11            ans+=last;
12            last++;
13        }
14        return ans;
15
16
17        
18    }
19};