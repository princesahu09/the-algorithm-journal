1class Solution {
2public:
3    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
4
5        sort(boxTypes.begin(),boxTypes.end(),[](auto a,auto b){return a[1]>b[1];});
6
7        int i=0;
8
9        int ans=0;
10
11        while(i<boxTypes.size())
12
13        {
14
15            int take=min(truckSize,boxTypes[i][0]);
16            ans+=take*boxTypes[i][1];
17            truckSize-=take;
18            i++;
19
20
21           
22        }
23        return ans;
24
25        
26    }
27};