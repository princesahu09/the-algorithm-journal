class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        const int n=nums.size();
        int ans=0;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                if(i!=j)
                {
                    ans+=(nums[i]+nums[j])==target?1:0;
                }

            }
        }

        return ans;
        
    }
};