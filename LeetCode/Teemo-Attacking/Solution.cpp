class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int ans = 0;
        const int n = timeSeries.size();
        int i = 0;
        while (i +1< n) {

           
              ans += min(duration, timeSeries[i + 1] - timeSeries[i]);
            i++;
        }
        ans+=duration;
        return ans;
    }
};