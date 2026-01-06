1class Solution {
2public:
3    int maxContainers(int n, int w, int maxWeight) {
4
5
6        int total=n*n*w;
7
8
9        if(total<maxWeight)
10        {
11            return n*n;
12        }
13    
14            return maxWeight/w;
15        
16
17        
18    }
19};