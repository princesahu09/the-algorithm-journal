class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;

        unordered_map<string, int> freq;
        for (auto& i : words) {
            freq[i]++;
        }
        vector<pair<string, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(),
             [](const pair<string, int> a, pair<string, int> b) {
                 if (a.second != b.second)
                 return a.second > b.second;
                     return a.first<b.first;
             });
             int i=0;
        while (k-- > 0) {
            ans.push_back(vec[i++].first);
        }
        return ans;
    }
};