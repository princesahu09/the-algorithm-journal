1class Solution {
2public:
3    int countQuadruplets(vector<int>& nums) {
4      
5        
6        const int n=nums.size();
7        set<vector<int>>s;
8
9
10        for(int i=0;i<n;i++)
11        {
12            for(int j=i+1;j<n;j++)
13            {
14                for(int k=j+1;k<n;k++)
15                {
16                    for(int l=k+1;l<n;l++)
17                    {
18                        if(nums[i]+nums[j]+nums[k]==nums[l])
19                        {
20                            s.insert({i,j,k,l});
21                        }
22                    }
23                }
24            }
25        }
26        return s.size();
27        
28    }
29};