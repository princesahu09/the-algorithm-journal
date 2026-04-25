1class Solution {
2public:
3    bool validDigit(int n, int x) {
4
5        
6        string temp=to_string(n);
7       
8        int ch=(temp.front()-'0');
9        if(ch==x)return false;
10
11        while(n>0)
12            {
13                int r=n%10;
14                if(r==x)return true;
15                n/=10;
16            }
17
18        return false;
19        
20    }
21};