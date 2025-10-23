class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);


        int i=0;
        int idx=0;
        int j=n;

        while(i<n)
        {
            ans[idx]=nums[i];idx++;
            ans[idx]=nums[j];idx++;
            i++;
            j++;

        }
        return ans;
        
    }
};