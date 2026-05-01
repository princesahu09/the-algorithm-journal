1class Solution {
2public:
3    int distanceTraveled(int m, int a) {
4
5        int extra=min(a,(m-1)/4);
6
7        
8
9        return (m+extra)*10;
10    }
11};