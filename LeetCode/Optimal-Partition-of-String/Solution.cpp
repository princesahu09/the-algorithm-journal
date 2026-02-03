1class Solution {
2public:
3    int partitionString(string s) {
4
5        int seen=0;
6        int ans=1;
7
8        for(int i=0;i<s.size();i++)
9        {
10           
11
12            for(int j=i;j<s.size();j++)
13            {
14                int ch=s[j]-'a';
15                if((seen&(1<<ch)))
16                {
17                    ans++;
18                    seen=0;
19                    seen|=(1<<ch);
20                    i=j;
21                    break;
22                }
23                seen|=(1<<ch);
24                if(j==s.size()-1)
25                {
26                    i=j;
27                }
28            }
29        }
30
31        return ans;
32        
33    }
34};