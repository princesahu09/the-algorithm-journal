1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4
5        int srow=0;
6        int erow=matrix.size()-1;
7        int scol=0;
8        int ecol=matrix[0].size()-1;
9
10
11
12        vector<int >ans;
13
14        while(srow<=erow&&scol<=ecol)
15        {
16            for(int j=scol;j<=ecol;j++)
17            {
18                ans.push_back(matrix[srow][j]);
19
20            }
21             for(int i=srow+1;i<=erow;i++)
22            {
23
24                ans.push_back(matrix[i][ecol]);
25                
26            } for(int j=ecol-1;j>=scol;j--)
27            {
28                if(srow==erow)break;
29                ans.push_back(matrix[erow][j]);
30                
31            } for(int i=erow-1;i>=srow+1;i--)
32            {
33                if(scol==ecol)break;
34
35                ans.push_back(matrix[i][scol]);
36                
37            }
38            srow++;
39            erow--;
40            scol++;
41            ecol--;
42
43        }
44
45        return ans;
46        
47    }
48};