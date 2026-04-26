1class Solution {
2public:
3    int compareBitonicSums(vector<int>& nums) {
4        typedef long long ll;
5
6        int n = nums.size();
7        int peek = 0;
8
9        for (int i = 0; i + 1 < n; i++) {
10            if (nums[i] > nums[i + 1]) {
11                peek = i;
12                break;
13            }
14        }
15
16        int i = 0;
17        ll left = 0;
18
19        for (int i=0;i <= peek;i++) {
20            left += nums[i];
21          
22        }
23
24        for (int i=peek;i < n;i++) {
25         left-=nums[i];
26            
27        }
28
29        if (left == 0)
30            return -1;
31
32        return left > 0 ? 0 : 1;
33    }
34};