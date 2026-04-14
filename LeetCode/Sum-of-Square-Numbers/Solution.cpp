1class Solution {
2public:
3    bool judgeSquareSum(int c) {
4
5        typedef long long ll;
6        ll a=0;
7        ll b=sqrt(c);
8        while(a<=b)
9        {
10            ll sum=a*a+b*b;
11
12            if(sum==c)return true;
13            else if(sum>c)b--;
14            else a++;
15        }
16        return false;
17    }
18};