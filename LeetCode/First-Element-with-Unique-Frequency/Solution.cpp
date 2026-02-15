1class Solution {
2public:
3    int firstUniqueFreq(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6
7        for(auto &i:nums)
8        {
9            freq[i]++;
10        }
11
12        unordered_map<int,int>u;
13
14        for(auto &i:freq)
15        {
16            u[i.second]++;
17
18        }
19
20        for(auto &i:nums)
21        {
22            if(u[freq[i]]==1)
23            {
24                return i;
25            }
26        }
27
28        return -1;
29        
30    }
31};