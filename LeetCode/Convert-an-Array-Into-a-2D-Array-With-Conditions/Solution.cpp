class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;

        unordered_map<int,int>arr;

        for(auto &i:nums)
        {
            arr[i]++;
        }

        for(auto &i:arr)
        {
            int start=0;
            int end=i.second;
            int k=0;
            while(start<end)
            {
                if (k >= ans.size())
                    ans.push_back({});

                ans[k].push_back(i.first);
                k++;
                start++;

            }
        }

        return ans;
        
    }
};