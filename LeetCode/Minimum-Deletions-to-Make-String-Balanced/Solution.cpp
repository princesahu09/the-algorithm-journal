1class Solution {
2public:
3    int minimumDeletions(string s) {
4
5        int b=0;
6        int ans=0;
7
8
9        for(auto &i:s)
10        {
11            if(i=='b')
12            {
13                b++;
14            }
15            else
16            {
17                ans=min(ans+1,b);
18            }
19        }
20
21
22        return ans;
23        
24    }
25};