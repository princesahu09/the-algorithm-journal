1class Solution {
2public:
3    bool isPossibleToSplit(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6
7        for(int &i:nums)
8        {
9            freq[i]++;
10        }
11
12        for(auto &i:freq)
13        {
14            if(i.second>2)
15            {
16                return false;
17            }
18        }
19
20        return true;
21        
22    }
23};