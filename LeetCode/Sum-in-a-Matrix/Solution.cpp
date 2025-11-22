class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
         int row=nums.size();
         int col=nums[0].size();

        int ans=0;


       

        for(auto &i:nums)
        {
            sort(i.begin(),i.end());
        }

        for(int i=0;i<col;i++)
        {
            int large=INT_MIN;
            for(int j=0;j<row;j++)
            {
                large=max(large,nums[j][i]);

            }
            ans+=large;
        }

    


        return ans;
        
    }
};