1class Solution {
2public:
3    int maxBottlesDrunk(int numBottles, int numExchange) {
4
5        int ans = numBottles;
6        int have = numBottles;
7        while (have >= numExchange) {
8            have -= numExchange;
9            numExchange++;
10            have++;
11            ans++;
12        }
13        return ans;
14    }
15};