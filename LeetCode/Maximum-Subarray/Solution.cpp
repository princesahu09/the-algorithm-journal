1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4
5        int curr=0;
6        int maxSum=INT_MIN;
7
8        for(auto &i:nums)
9        {
10            curr+=i;
11            maxSum=max(curr,maxSum);
12            if(curr<0)
13            {
14                curr=0;
15            }
16        }
17
18        return maxSum;
19        
20    }
21};