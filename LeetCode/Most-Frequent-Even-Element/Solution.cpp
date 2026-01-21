1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6
7        for(auto &i:nums)
8        {
9            if(i%2==0)
10            {
11                freq[i]++;
12            }
13        }
14
15        int high=0;
16        int ans=-1;
17        for(auto &i:freq)
18        {
19            if(i.second==high)
20            {
21                ans=min(i.first,ans);
22
23            }
24            else if(i.second>high)
25            {
26                ans=i.first;
27                high=i.second;
28            }
29        }
30
31        return ans;
32        
33    }
34};