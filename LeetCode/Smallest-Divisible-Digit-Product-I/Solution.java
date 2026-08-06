1class Solution {
2public:
3int product(int n)
4{
5     int product=1;
6
7        while(n>0)
8        {
9            product*=n%10;
10            n/=10;
11        }
12        return product;
13
14}
15    int smallestNumber(int n, int t) {
16
17
18        for(int i=n;;i++)
19        {
20            if(product(i)%t==0)return i;
21        }
22
23       
24        
25    }
26};