1class Solution {
2public:
3    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
4
5        if(arrivalTime+delayedTime>=24)
6        {
7            return abs(24-arrivalTime-delayedTime);
8        }
9        return arrivalTime+delayedTime;
10        
11    }
12};