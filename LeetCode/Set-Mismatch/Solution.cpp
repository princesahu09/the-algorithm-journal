class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();

        unordered_set<int>number(nums.begin(),nums.end());
        int ss=accumulate(number.begin(),number.end(),0);
        int normal=accumulate(nums.begin(),nums.end(),0);
        int natural=n*(n+1)/2;
        int missing=natural-ss;
        int repeated=missing-(natural-normal);
        return {repeated,missing};
        
        
    }
};