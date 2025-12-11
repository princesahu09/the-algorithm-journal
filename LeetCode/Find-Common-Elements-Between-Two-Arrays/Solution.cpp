1class Solution {
2public:
3    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
4
5        int ans1=0;
6        int ans2=0;
7        unordered_map<int,int>map1;
8        for(int &i:nums1)
9        {
10            map1[i]++;
11        }
12        unordered_map<int,int>map2;
13         for(int &i:nums2)
14        {
15            map2[i]++;
16        }
17
18        for(int &i:nums1)
19        {
20            if(map2.count(i))
21            {
22                ans1++;
23            }
24        }
25         for(int &i:nums2)
26        {
27            if(map1.count(i))
28            {
29                ans2++;
30            }
31        }
32        return {ans1,ans2};
33        
34    }
35};