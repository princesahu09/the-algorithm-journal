1class Solution {
2public:
3    int countPoints(string rings) {
4
5
6        unordered_map<int,set<char>>tower;
7
8        for(int i=0;i<rings.size();i+=2)
9        {
10            char color=rings[i];
11            int rod=rings[i+1]-'0';
12            tower[rod].insert(color);
13           
14        }
15        int ans=0;
16
17        for(auto &i:tower)
18        {
19            if(i.second.count('R')&&i.second.count('B')&&i.second.count('G'))
20            {
21                ans++;
22            }
23        }
24
25        return ans;
26        
27    }
28};