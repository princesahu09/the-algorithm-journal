1class Solution {
2    public int minTimeToVisitAllPoints(int[][] points) {
3        int ans=0;
4
5
6
7        for(int i=1;i<points.length;i++)
8        {
9
10            int backwardX=points[i-1][0];
11            int backwardY=points[i-1][1];
12
13            int forwardX=points[i][0];
14            int forwardY=points[i][1];
15
16            int linear=Math.max(Math.abs(backwardX-forwardX),Math.abs(backwardY-forwardY));
17            ans+=linear;
18
19
20        }
21
22        return ans;
23        
24    }
25}