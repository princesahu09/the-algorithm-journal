1class Solution {
2public:
3    bool satisfiesConditions(vector<vector<int>>& grid) {
4
5        int m=grid.size();
6        int n=grid[0].size();
7
8
9        for(int i=0;i<m;i++)
10        {
11            for(int j=0;j<n;j++)
12            {
13
14                if(i+1<m&&grid[i+1][j]!=grid[i][j])return false;
15                if(j+1<n&&grid[i][j+1]==grid[i][j])return false;
16
17
18            }
19        }
20
21        return true;
22        
23    }
24};