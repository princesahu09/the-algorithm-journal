1class Solution {
2public:
3    int duplicateNumbersXOR(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6
7        for(int &i:nums)
8        {
9            freq[i]++;
10        }
11        int ans=0;
12
13        for(auto &i:freq)
14        {
15            if(i.second==2)
16            {
17                ans^=i.first;
18            }
19        }
20        return ans;
21        
22    }
23};