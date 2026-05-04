1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4
5        for(int i=0;i<matrix.size();i++)
6        {
7           
8            
9
10            for(int j=i;j<matrix[i].size();j++)
11            {
12                swap(matrix[i][j],matrix[j][i]);
13               
14
15            }
16
17        }
18
19        for(int i=0;i<matrix.size();i++)
20        {
21            reverse(matrix[i].begin(),matrix[i].end());
22        }
23
24
25        
26    }
27};