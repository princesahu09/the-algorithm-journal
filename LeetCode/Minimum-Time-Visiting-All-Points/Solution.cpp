1class Solution {
2public:
3    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
4
5        int ans=0;
6
7
8
9        for(int i=1;i<points.size();i++)
10        {
11
12            int backwardX=points[i-1][0];
13            int backwardY=points[i-1][1];
14
15            int forwardX=points[i][0];
16            int forwardY=points[i][1];
17
18            int linear=max(abs(backwardX-forwardX),abs(backwardY-forwardY));
19            ans+=linear;
20
21
22        }
23
24        return ans;
25        
26    }
27};