1class Solution {
2public:
3    int minOperations(int n) {
4
5        int start = 1;
6        int end = n ;
7        int ans = 0;
8
9       while(start<=end)
10       {
11        ans+=(end-start);
12        start++;
13        end--;
14       }
15        return ans;
16    }
17};