1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int totalCost=accumulate(cost.begin(),cost.end(),0);
5        int totalGas=accumulate(gas.begin(),gas.end(),0);
6        
7
8
9        if(totalGas<totalCost)return -1;
10        int ans=0;
11        int cg=0;
12
13        for(int i=0;i<gas.size();i++)
14        {
15            cg+=gas[i]-cost[i];
16            if(cg<0)
17            {
18                cg=0;
19                ans=i+1;
20            }
21
22        }
23        return ans;
24        
25    }
26};