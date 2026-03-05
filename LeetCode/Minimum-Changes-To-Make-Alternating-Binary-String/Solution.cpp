1class Solution {
2public:
3    int minOperations(string s) {
4
5        
6
7        const int n=s.size();
8        int p1=0;
9        int p2=0;
10        for (int i = 0; i < n; i++) {
11
12            if(s[i]!=(i%2?'1':'0'))
13            p1++;
14            
15            if(s[i]!=(i%2?'0':'1'))
16            p2++;
17        }
18        return min(p1,p2);
19    }
20};