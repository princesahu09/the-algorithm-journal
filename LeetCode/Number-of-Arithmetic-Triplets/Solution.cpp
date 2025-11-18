class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      
        int ans=0;
      const  unordered_set<int>s(nums.begin(),nums.end());

        for(auto &x:nums)
        {
            if(s.count(x+diff)&&s.count(x+2*diff))
            {
                ans++;
            }
        }


      
        return ans;
        
    }
};