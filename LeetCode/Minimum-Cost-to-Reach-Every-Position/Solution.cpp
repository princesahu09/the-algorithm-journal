1class Solution {
2public:
3    vector<int> minCosts(vector<int>& cost) {
4
5        const int n=cost.size();
6
7        vector<int>ans(n,0);
8        int low=cost.front();
9        ans[0]=low;
10        
11
12        for(int i=1;i<n;i++)
13        {
14            if(low>cost[i])
15            {
16                low=cost[i];
17
18            }
19                ans[i]=low;
20        }
21        return ans;
22        
23    }
24};