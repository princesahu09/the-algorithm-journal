1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int count=0;
5
6      for(int i=0;i<grid.size();i++)
7      {
8
9        for(auto j:grid[i])
10        {
11
12            if(j<0)
13            {
14                count++;
15            }
16        }
17      }
18      return count;
19        
20    }
21};