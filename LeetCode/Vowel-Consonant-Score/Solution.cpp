1class Solution {
2public:
3    int vowelConsonantScore(string s) {
4
5        int v=0;
6        int c=0;
7
8        for(char &i:s)
9        {
10            if(i=='a'||i=='i'||i=='o'||i=='e'||i=='u')v++;
11            else if(i>='a'&&i<='z') c++;
12            else continue;
13        }
14        
15
16
17        if(c>0)
18        {
19            return floor(v/c);
20
21        }
22        return 0;
23        
24    }
25};