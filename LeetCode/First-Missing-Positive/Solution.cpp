1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4
5        unordered_map<int ,bool>visited;
6        int low=INT_MAX;
7        int high=INT_MIN;
8
9        for(auto i:nums)
10        {
11            if(i>0)
12           { visited[i]=true;}
13            low=min(low,i);
14            high=max(high,i);
15        }
16
17        int i=1;
18        if(high<0&&low<0)return 1;
19        while(i<high)
20        {
21            if(!visited[i])
22            {
23                return i;
24            }
25            i++;
26        }
27        return high+1;
28       
29
30
31        
32
33        
34        
35    }
36};