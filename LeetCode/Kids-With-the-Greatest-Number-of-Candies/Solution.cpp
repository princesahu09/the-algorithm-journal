class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool>ans(candies.size(),false);

        int large=INT_MIN;

        for(auto &i:candies)
        {
            large=max(large,i);
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=large)
            {
               ans[i]=true;
            }
        }

        return ans;
        
    }
};