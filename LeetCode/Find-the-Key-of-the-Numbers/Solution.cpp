1class Solution {
2public:
3    int generateKey(int num1, int num2, int num3) {
4        int ans = 0;
5        int i = 0;
6        int temp = 0;
7        while (i < 4) {
8            int r1 = 0, r2 = 0, r3 = 0;
9            if (num1 > 0) {
10                r1 = num1 % 10;
11                num1 /= 10;
12            }
13            if (num2 > 0) {
14                r2 = num2 % 10;
15                num2 /= 10;
16            }
17            if (num3 > 0) {
18                r3 = num3 % 10;
19                num3 /= 10;
20            }
21            int low = min(r1, min(r2, r3));
22            ans+=low*pow(10,i);
23            i++;
24
25           
26        }
27       
28        return ans;
29    }
30};