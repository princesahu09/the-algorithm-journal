class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product=1;

        int zero=0;
       
        for(auto &i:nums)
        {
            if(i!=0)
            {product*=i;

            }
            else
            {
                zero++;
            }
        }
        
            vector<int>ans(nums.size(),0);

        if(zero>1)
        {
            return ans;
        }
        else if(zero==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                   ans[i]=0;
                }
                else
                {
                    ans[i]=product;
                }
            }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                ans[i]=product/nums[i];
            }
        }

        return ans;
        
    }
};