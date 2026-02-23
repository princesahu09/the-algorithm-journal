1class Solution {
2public:
3bool solve(vector<vector<int>>&grid,int r,int c,int n,int ev)
4{
5
6    if(r>=n||c>=n||r<0||c<0||grid[r][c]!=ev)return false;
7    if(ev==n*n-1)return true;
8   
9
10    bool ans1=solve(grid,r-2,c+1,n,ev+1);
11    bool ans2=solve(grid,r-1,c+2,n,ev+1);
12    bool ans3=solve(grid,r+1,c+2,n,ev+1);
13    bool ans4=solve(grid,r+2,c+1,n,ev+1);
14    bool ans5=solve(grid,r+2,c-1,n,ev+1);
15    bool ans6=solve(grid,r+1,c-2,n,ev+1);
16    bool ans7=solve(grid,r-1,c-2,n,ev+1);
17    bool ans8=solve(grid,r-2,c-1,n,ev+1);
18    return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
19}
20    bool checkValidGrid(vector<vector<int>>& grid) {
21
22        return solve(grid,0,0,grid.size(),0);
23        
24    }
25};