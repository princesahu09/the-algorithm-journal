class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;


        for(auto &i:nums)
        {
            int temp=log10(i)+1;
            if(temp%2==0)ans++;
        }
        return ans;
        
    }
};