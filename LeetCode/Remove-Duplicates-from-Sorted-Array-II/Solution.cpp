1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6
7        for(auto &i:nums)
8        {
9            freq[i]++;
10        }
11        nums.clear();
12        for(auto &i:freq)
13        {
14            int j=0;
15            while(j<2&&j<i.second)
16            {
17                nums.push_back(i.first);
18                j++;
19            }
20        }
21        sort(nums.begin(),nums.end());
22        return nums.size();
23        
24    }
25};