#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;

        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i+1;j<nums.size();j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                {
                    ans.insert(ans.begin(),i);
                    ans.insert(ans.begin(),j);
                    break;
                    
                }
            }
            if(ans.empty())
            {
                continue;
            }
            else
            {
                break;
            }
        }
        return ans;
        
    }
};