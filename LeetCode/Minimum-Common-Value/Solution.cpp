1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4
5        int i=0;
6        int j=0;
7        while(i<nums1.size()&&j<nums2.size())
8        {
9
10            if(nums1[i]==nums2[j])
11            {
12                return nums1[i];
13            }
14            else if(nums1[i]<nums2[j])
15            {
16                i++;
17            }
18            else
19            {
20                j++;
21            }
22        }
23
24        return -1;
25        
26    }
27};