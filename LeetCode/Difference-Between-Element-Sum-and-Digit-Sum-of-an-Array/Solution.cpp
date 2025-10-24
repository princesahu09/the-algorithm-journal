class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int suma=0;

        int sumd=0;

        for(auto &i:nums){suma+=i;}
        

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=9)
            {
                sumd+=nums[i];
            }
            else
            {
                while(nums[i]>0)
                {
                    sumd+=nums[i]%10;
                    nums[i]/=10;
                }
            }
        }

        return abs(suma-sumd);
        
    }
};