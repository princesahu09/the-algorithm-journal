1class Solution {
2public:
3    int minSteps(int n) {
4        int ans=0;
5        int d=2;
6
7        if(n<2)return 0;
8        
9        while(n>1)
10        {
11            if(n%d==0)
12            {
13                ans+=d;
14                n/=d;
15            }
16            else
17            {
18               d++;
19            }   
20
21        }
22
23        return ans;
24        
25    }
26};