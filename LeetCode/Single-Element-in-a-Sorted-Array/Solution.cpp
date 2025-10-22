class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       
        int unique=0;
        //int unique2=0;

        for(int i=0;i<nums.size();i+=2)
        {
            unique^=nums[i];

        }
        for(int i=1;i<nums.size();i+=2)
        {
            unique^=nums[i];
        }

        return unique;
        
    }
};