class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        const int n=nums.size();


        for(int i=0;i+1<n;i++)
        {
            if((nums[i]&1)==(nums[i+1]&1))
            {
                return false;
            }
        }
        return true;
        
    }
};