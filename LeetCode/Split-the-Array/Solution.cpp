1class Solution {
2public:
3    bool isPossibleToSplit(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6
7        for(int &i:nums)
8        {
9            freq[i]++;
10            if(freq[i]>2)
11
12            {
13                return false;
14            }
15        }
16
17        // for(auto &i:freq)
18        // {
19        //     if(i.second>2)
20        //     {
21        //         return false;
22        //     }
23        // }
24
25        return true;
26        
27    }
28};