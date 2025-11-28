1class Solution {
2public:
3    int arithmeticTriplets(vector<int>& nums, int diff) {
4        const int n=nums.size();
5        int ans=0;
6
7
8        for(int i=0;i<n;i++)
9        {
10            for(int j=i+1;j<n;j++)
11            {
12                for(int k=j+1;k<n;k++)
13                {
14
15                    if((nums[j]-nums[i])==diff&&(nums[k]-nums[j])==diff)
16                    {
17                        ans++;
18                    }
19                }
20            
21            }
22        }
23        return ans;
24        
25    }
26};