class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> freq;

        for (int& i : nums) {
            freq[i]++;
        }
        vector<pair<int, int>> vec(freq.begin(), freq.end());

        sort(vec.begin(), vec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                if(a.second==b.second)return a.first>b.first;
                 return a.second < b.second;
             });
        nums.clear();

        for (auto& i : vec) {
            int start = 0;
            int end = i.second;
            while (start < end) {
                nums.push_back(i.first);
                start++;
            }
        }

        return nums;
    }
};