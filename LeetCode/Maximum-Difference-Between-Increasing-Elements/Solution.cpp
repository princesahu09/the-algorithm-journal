1class Solution {
2public:
3    int maximumDifference(vector<int>& nums) {
4        const int n=nums.size();
5        int ans=-1;
6
7        for(int i=0;i<n;i++)
8        {
9
10            for(int j=i+1;j<n;j++)
11            {
12
13                if(nums[i]<nums[j])
14               { ans=max(ans,nums[j]-nums[i]);}
15            }
16        }
17
18        
19
20        return ans;
21    }
22};