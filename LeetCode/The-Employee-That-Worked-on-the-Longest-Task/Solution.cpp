1class Solution {
2public:
3    int hardestWorker(int n, vector<vector<int>>& logs) {
4
5
6         int index=logs[0][0];
7        int high=logs[0][1]-0;
8        int ans=0;
9
10
11        for(int i=1;i<logs.size();i++)
12        {
13
14            int temp=logs[i][1]-logs[i-1][1];
15            if(temp>high)
16            {
17                high=temp;
18                index=logs[i][0];
19                
20            }
21            else if(temp==high)
22            {
23                index=min(index,logs[i][0]);
24            }
25            
26
27
28        }
29
30        return index;
31        
32    }
33};