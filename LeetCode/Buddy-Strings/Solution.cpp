1class Solution {
2public:
3    bool buddyStrings(string s, string goal) {
4
5        if(s.size()!=goal.size())return false;
6       
7
8        vector<int>diff;
9        if(s==goal)
10        {
11            vector<int>letter(26,0);
12            for(auto &i:s)
13            {
14                letter[i-'a']++;
15                if(letter[i-'a']>=2)return true;
16            }
17            return false;
18        }
19        
20
21
22        for(int i=0;i<s.size();i++)
23        {
24            if(s[i]!=goal[i])
25            {
26                diff.push_back(i);
27            }
28           
29        }
30        if(diff.size()!=2)return false;
31         int i = diff[0];
32        int j = diff[1];
33
34        return (s[i] == goal[j] && s[j] == goal[i]);
35
36
37
38      
39        
40    }
41};