1class Solution {
2public:
3    int minCost(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_map<int,int>freq1;
6        unordered_map<int,int>freq2;
7        unordered_map<int,int>freq;
8
9        for(auto &i:nums1)
10        {
11            freq1[i]++;freq[i]++;
12        }
13        for(auto &i:nums2)
14        {
15            freq2[i]++;freq[i]++;
16        }
17        for(auto &i:freq)
18        {
19            if(i.second%2!=0)return -1;
20        }
21
22        int ans=0;
23        
24
25        for(auto &i:freq)
26        {
27            ans+=abs(freq1[i.first]-freq2[i.first]);
28        }
29        return ans/4;
30        
31    }
32};