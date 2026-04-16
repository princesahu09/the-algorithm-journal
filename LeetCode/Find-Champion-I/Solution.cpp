1class Solution {
2public:
3    int findChampion(vector<vector<int>>& grid) {
4
5        int ans=-1;
6
7        int high=0;
8
9
10        for(int i=0;i<grid.size();i++)
11        {
12
13            int sum=accumulate(grid[i].begin(),grid[i].end(),0);
14
15            if(sum>high)
16            {
17                ans=i;
18                high=sum;
19            }
20
21        }
22
23        return ans;
24        
25    }
26};