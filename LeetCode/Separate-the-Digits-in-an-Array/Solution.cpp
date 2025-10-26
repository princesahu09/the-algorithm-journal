class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;


        for(int i=0;i<nums.size();i++)
        {
            vector<int>demo;

            while(nums[i]>0)
            {
                demo.push_back(nums[i]%10);
                nums[i]/=10;
            }
            reverse(demo.begin(),demo.end());
            ans.insert(ans.end(),demo.begin(),demo.end());
            demo.clear();
        }
        return ans;
        
    }
};