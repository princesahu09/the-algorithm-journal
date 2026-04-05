1class Solution {
2public:
3    bool judgeCircle(string moves) {
4
5
6        int x=0;
7        int y=0;
8
9        for(char &i:moves)
10        {
11            if(i=='U')y++;
12            else if(i=='D')y--;
13            else if(i=='R')x++;
14            else x--;
15        }
16
17
18        return x==0&&y==0;
19        
20    }
21};