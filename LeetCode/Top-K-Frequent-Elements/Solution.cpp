class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        //test

        for (auto& i : nums) {
            freq[i]++;
        }
        vector<pair<int, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(),
             [](auto& a, auto& b) { return a.second > b.second; });
        vector<int> ans;
        int i=0;

        while (i<k) {
            ans.push_back(vec[i].first);
            i++;
        }

        return ans;
    }
};