1class Solution {
2public:
3    int furthestDistanceFromOrigin(string moves) {
4
5        int move=0;
6        int left=0;
7        int right=0;
8
9        for(auto &i:moves)
10        {
11            if(i=='L')
12            {
13                left++;
14            }
15            else if(i=='R')
16            {
17                right++;
18            }
19            else
20            {
21                move++;
22            }
23        }
24
25        return move+max(left,right)-min(right,left);
26
27        
28
29       
30    }
31};