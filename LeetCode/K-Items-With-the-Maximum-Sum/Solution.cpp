1class Solution {
2public:
3    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
4
5        int ans=0;
6        if(k==0)return 0;
7
8        if(numOnes>=k)return k;
9
10        if(k>numOnes){
11        
12            ans+=numOnes;
13            k-=numOnes;
14        }
15
16        if(k!=0&&numZeros>=k)
17        {
18            k=0;
19
20        }
21        if(k!=0&&k>numZeros)
22        {
23            k-=numZeros;
24        }
25
26        if(k!=0&&numNegOnes>=k)
27        {
28            ans-=k;
29        }
30        
31
32        return ans;
33    }
34      
35
36
37        
38    
39};