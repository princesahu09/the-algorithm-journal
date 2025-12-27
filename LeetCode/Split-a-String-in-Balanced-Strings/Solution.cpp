1class Solution {
2public:
3    int balancedStringSplit(string s) {
4
5
6        int balance=0;
7        
8        int ans=0;
9          for(int i=0;i<s.size();i++)
10          {
11
12            if(balance==0)
13            {
14                ans++;
15            }
16            if(s[i]=='L')
17            {
18                balance++;
19            }
20            else
21            {
22                balance--;
23            }
24
25                
26            
27          }
28          return ans;
29        
30    }
31};