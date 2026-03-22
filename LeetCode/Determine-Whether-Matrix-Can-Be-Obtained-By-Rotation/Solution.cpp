1class Solution {
2public:
3    bool rotate(vector<vector<int>>& mat, vector<vector<int>>& target) {
4        int n = mat.size();
5       
6
7       
8        for (int i = 0; i < n; i++) {
9            for (int j = i; j < n; j++) {
10                swap(mat[i][j], mat[j][i]);
11            }
12        }
13        for(auto &i:mat)
14        {
15            reverse(i.begin(),i.end());
16        }
17      
18       
19       
20        return mat == target;
21    }
22
23    
24    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
25
26       
27        
28        
29
30        return rotate(mat, target) || rotate(mat, target) ||
31               rotate(mat, target) || rotate(mat, target)||rotate(mat,target);
32    }
33};