1class Solution {
2public:
3    double angleClock(int hour, int minutes) {
4
5        double ans=abs(30*hour-5.5*minutes);
6
7        return min(ans,360-ans);
8        
9    }
10};