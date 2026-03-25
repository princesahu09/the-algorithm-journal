1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4
5        vector<int>ans;
6
7        unordered_map<int,int>freq;
8
9        for(auto &i:nums)
10        {
11            freq[i]++;
12        }
13
14        for(auto &i:freq)
15        {
16            if(i.second==2)
17            {
18                ans.push_back(i.first);
19            }
20        }
21
22        return ans;
23        
24    }
25};