1    class Solution {
2    public:
3        vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
4            
5
6            vector<int >ans;
7            unordered_map<int ,int>mask;
8            for(int &i:nums1)
9            {
10                mask[i]=1;
11            }
12            for(int &i:nums2)
13            {
14                mask[i]|=(1<<1);
15            } for(int &i:nums3)
16            {
17                mask[i]|=(1<<2);
18            }
19
20            for(auto &i:mask)
21            {
22                if(__builtin_popcount(i.second)>=2)
23                {
24                    ans.push_back(i.first);
25                }
26            }
27            
28            return ans;
29        }
30    };