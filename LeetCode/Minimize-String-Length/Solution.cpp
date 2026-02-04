1class Solution {
2public:
3    int minimizedStringLength(string s) {
4
5        int bitmask=0;
6        for(auto &i:s)
7        {
8            bitmask|=(1<<(i-'a'));
9
10        }
11
12        int ans=0;
13       for(int i=0;i<32;i++)
14       {
15        if(bitmask&(1<<i))ans++;
16       }
17        return ans;
18        
19    }
20};