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
        vector<int>ans;

        if(zero>1)
        {
            vector<int>z(nums.size(),0);
            return z;
        }
        else if(zero==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(product);
                }
            }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                ans.push_back(product/nums[i]);
            }
        }

        return ans;
        
    }
};