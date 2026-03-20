1class Solution {
2public:
3    vector<int> minDistinctFreqPair(vector<int>& nums) {
4
5        vector<int>freq(101,0);
6
7        for(auto &i:nums)
8        {
9            freq[i]++;
10        }
11
12
13        for(int i=0;i<101;i++)
14        {
15
16            if(freq[i]==0)continue;
17            for(int j=i;j<101;j++)
18            {
19                if(freq[j]==0)
20                {
21                    continue;
22                }
23
24
25                if(freq[i]!=freq[j])
26                {
27                    return {i,j};
28                }
29
30            }
31        }
32        return {-1,-1};
33
34
35        
36    }
37};