class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;


        while(numBottles/numExchange!=0)
        {
            int d=numBottles/numExchange;


            ans+=d;
            int r=numBottles%numExchange;
            numBottles=d+r;


        }
        return ans;
        
    }
};