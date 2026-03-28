1class Solution {
2public:
3
4bool check(int n)
5{
6    while(n>0)
7    {
8        if(n%10==0){
9            return false;
10        }
11        n/=10;
12    }
13    return true;
14}
15    vector<int> getNoZeroIntegers(int n) {
16
17        int start=1;
18        int end=n;
19
20        while(start<=end)
21        {
22            if(check(start)&&check(end))
23            {
24                if(start+end==n)
25                {
26                    return{start,end};
27                }
28               else  if(start+end>n)
29                {
30                    end--;
31                }
32                else {
33                    start++;
34                }
35            }
36
37            if(!check(start))
38            {
39                start++;
40            }
41            if(!check(end))
42            {
43                end--;
44            }
45        }
46
47        return {-1,-1};
48        
49    }
50};