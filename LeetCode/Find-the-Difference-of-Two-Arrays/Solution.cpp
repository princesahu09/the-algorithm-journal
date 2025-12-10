1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_set<int>map1(nums1.begin(),nums1.end());
6        unordered_set<int>map2(nums2.begin(),nums2.end());
7
8        unordered_set<int>ans1;
9        unordered_set<int>ans2;
10        for(int i:nums1)
11        {
12            if(!map2.count(i))
13            {
14                ans1.insert(i);
15            }
16        }
17         for(int j:nums2)
18        {
19            if(!map1.count(j))
20            {
21                ans2.insert(j);
22            }
23        }
24        vector<int>r1(ans1.begin(),ans1.end());
25        vector<int>r2(ans2.begin(),ans2.end());
26
27        
28
29        return {r1,r2};
30        
31    }
32};