1class Solution {
2public:
3    bool checkString(string s) {
4        int i=0;
5
6
7        for(;i<s.size();i++)
8        {
9            if(s[i]!='a')
10            {
11                break;
12            }
13        }
14
15        for(;i<s.size();i++)
16        {
17
18            if(s[i]=='a')
19            {
20                return false;
21            }
22        }
23
24        return true;
25        
26    }
27};