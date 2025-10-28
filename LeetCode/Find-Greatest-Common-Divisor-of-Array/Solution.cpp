class Solution {
public:
    int findGCD(vector<int>& nums) {

        int high=INT_MIN;
        int low=INT_MAX;

        for(auto &i:nums)
        {
            high=max(high,i);
            low=min(low,i);
        }
        return gcd(high,low);
        
    }
};