class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        const int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;

        for (auto &i : nums) {
           
             if(i<pivot)
            {
                ans[left++]=i;
            }
        }
        
        for (auto &i : nums) {
           
             if(i==pivot)
            {
                ans[left++]=i;
            }
        }
        for (auto &i : nums) {
           
             if(i>pivot)
            {
                ans[left++]=i;
            }
        }
       

        return ans;
    }
};