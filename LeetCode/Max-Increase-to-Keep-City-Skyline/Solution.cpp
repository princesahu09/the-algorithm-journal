1class Solution {
2public:
3    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
4
5
6const int n=grid.size();
7        vector<int>rowHigh(n,0);
8        vector<int>colHigh(n,0);
9
10        for(int i=0;i<n;i++)
11        {
12            rowHigh[i]=*max_element(grid[i].begin(),grid[i].end());
13        }
14        for(int i=0;i<n;i++)
15        {
16            int high=INT_MIN;
17            for(int j=0;j<n;j++)
18            {
19                high=max(high,grid[j][i]);
20            }
21            colHigh[i]=high;
22        }
23        int ans=0;
24        for(int i=0;i<n;i++)
25        {
26            for(int j=0;j<n;j++)
27            {
28                ans+=min(rowHigh[i],colHigh[j])-grid[i][j];
29            }
30        }
31
32        return ans;
33        
34    }
35};