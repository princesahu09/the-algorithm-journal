1class Solution {
2public:
3    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
4
5        sort(score.begin(),score.end(),[&](vector<int> &a,vector<int> &b){return a[k]>b[k];});
6
7        return score;
8        
9    }
10};