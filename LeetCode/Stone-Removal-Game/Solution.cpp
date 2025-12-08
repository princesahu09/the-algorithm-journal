1class Solution {
2public:
3    bool canAliceWin(int n) {
4        int i=10;
5        bool alice=true;
6        while(n>0&&i>0)
7        {
8            if(n<i)return !alice;
9            n-=i;
10            i--;
11            alice=!alice;
12        }
13        return  !alice;
14        
15    }
16};