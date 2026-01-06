1class Solution {
2public:
3    int deleteGreatestValue(vector<vector<int>>& grid) {
4
5        const int m=grid.size();
6        const int n=grid[0].size();
7        int ans=0;
8
9        for(auto &i:grid)
10        {
11            sort(i.begin(),i.end());
12        }
13
14
15        for(int j=0;j<n;j++)
16        {
17
18            int high=INT_MIN;
19
20
21            for(int i=0;i<m;i++)
22            {
23
24                high=max(high,grid[i][j]);
25                
26            }
27
28            ans+=high;
29        }
30
31        return ans;
32        
33    }
34};