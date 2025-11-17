class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {

        vector<int>ans;
        unordered_map<int,int>intersection;
        for(auto &i:nums)
        {
            for(auto &j:i)
            {
                intersection[j]++;
            }
        }

        for(auto &i:intersection)
        {
            if(i.second==nums.size())
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};