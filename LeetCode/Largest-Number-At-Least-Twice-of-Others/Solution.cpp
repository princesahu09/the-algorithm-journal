1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4
5        int high=nums[0];
6        int index=0;
7
8        for(int i=1;i<nums.size();i++)
9        {
10            if(nums[i]>high)
11            {
12                high=nums[i];
13                index=i;
14            }
15        }
16
17        for(int i=0;i<nums.size();i++)
18        {
19            if(i!=index&&2*nums[i]>high)
20            
21            {
22                return -1;
23            }
24        }
25
26        return  index;
27        
28    }
29};