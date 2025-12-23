1class Solution {
2public:
3    int minPairSum(vector<int>& nums) {
4
5
6        int ans=INT_MIN;const int n=nums.size();
7        sort(nums.begin(),nums.end());
8        int start=0;
9        int end=n-1;
10        while(start<end)
11        {
12            ans=max(ans,nums[start]+nums[end]);
13            start++;
14            end--;
15        }
16        return ans;
17        
18    }
19};