1class Solution {
2public:
3    int addRungs(vector<int>& rungs, int dist) {
4        int ans=0;
5        int f=rungs[0]-0;
6        if(f>dist)
7        {
8            ans+=(f-1)/dist;
9        }
10        for(int i=1;i<rungs.size();i++)
11        {
12            int diff=rungs[i]-rungs[i-1];
13            cout<<diff<<endl;
14            if(diff>dist)
15            {
16                ans+=(diff-1)/dist;
17            }
18            
19        }
20        return ans;
21        
22    }
23};