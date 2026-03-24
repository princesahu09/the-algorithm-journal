1class Solution {
2public:
3int reverse(int num)
4{
5    int ans=0;
6
7    while(num>0)
8    {
9        ans=ans*10+(num%10);
10        num/=10;
11    }
12    return ans;
13}
14
15
16    bool sumOfNumberAndReverse(int num) {
17    if(num==0)return true;
18
19       for(int i=1;i<=num;i++)
20       {
21        if(reverse(i)+i==num)
22        {
23            return true;
24        }
25       }
26
27        return false;
28        
29    }
30};