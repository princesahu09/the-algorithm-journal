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
13        while(bitmask>0)
14        {
15            if(bitmask&1)ans++;
16            bitmask>>=1;
17        }
18        return ans;
19        
20    }
21};