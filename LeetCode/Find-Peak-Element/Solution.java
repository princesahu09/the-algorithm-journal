1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4
5        const int n=nums.size();
6        int start=0;
7        int end=n-1;
8
9        while(start<end)
10        {
11
12            int mid=start+(end-start)/2;
13
14            if(nums[mid]<nums[mid+1])
15            {
16                start=mid+1;
17            }
18            else 
19            
20            {
21                end=mid;
22            }
23        }
24        return start;
25        
26    }
27};