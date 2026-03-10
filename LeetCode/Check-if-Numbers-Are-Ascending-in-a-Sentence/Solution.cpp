1class Solution {
2public:
3    bool areNumbersAscending(string s) {
4
5
6        int lastBig=-1;
7
8        for(int i=0;i<s.size();i++)
9        {
10            if(!(s[i]>='0'&&s[i]<='9'))
11            {
12                continue;
13
14            }
15            else
16            {
17                int number=0;
18                int j=i;
19                while(s[j]>='0'&&s[j]<='9')
20                {
21                    number=number*10+(s[j]-'0');
22                    j++;
23
24                }
25                if(lastBig!=-1&&lastBig>=number)
26                {
27                    return false;
28                }
29                lastBig=number;
30                i=j;
31            }
32        }
33
34        return true;
35        
36    }
37};