1class Solution {
2public:
3    string getSmallestString(string s) {
4        int chance=1;
5
6        for (int i = 1; i < s.size()&&chance>0; i++) {
7
8
9            if(((s[i]-'0')&1)==((s[i-1]-'0')&1))
10            {
11                if(s[i-1]>s[i])
12                {
13                    swap(s[i-1],s[i]);
14                    chance--;
15                }
16
17
18            }
19        }
20        return s;
21    }
22};