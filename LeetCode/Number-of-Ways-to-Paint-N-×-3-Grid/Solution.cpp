1class Solution {
2public:
3    int numOfWays(int n) {
4        const int m=1e9+7;
5
6        typedef long long ll;
7
8        ll a=6;ll b=6;
9       for(int i=2;i<=n;i++)
10        {
11            ll newA=((2*a)%m+(2*b)%m)%m;
12            ll newB=((2*a)%m+(3*b)%m)%m;
13
14            a=newA;
15            b=newB;
16        }
17
18        return ( a+b)%m;
19        
20    }
21};