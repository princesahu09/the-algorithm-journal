1class Solution {
2public:
3    int numberOfCuts(int n) {
4        if(n==1)return 0;
5        return n&1?n:n/2;
6        
7    }
8};