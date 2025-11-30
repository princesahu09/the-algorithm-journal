1class Solution {
2public:
3    int maxDistinct(string s) {
4        vector<int>visited(26,0);
5        int ans=0;
6        
7        for(char &i:s)
8        {
9            visited[i-'a']++;
10        }
11
12        for(auto &i:visited)
13        {
14            if(i!=0)
15            {
16                ans++;
17            }
18        }
19
20
21        return ans;
22        
23    }
24};