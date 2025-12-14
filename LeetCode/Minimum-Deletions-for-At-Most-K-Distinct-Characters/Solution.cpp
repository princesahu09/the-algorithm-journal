1class Solution {
2public:
3    int minDeletion(string s, int k) {
4
5        unordered_map<char, int> freq;
6        for (char& ch : s) {
7            freq[ch]++;
8        }
9        if(freq.size()<=k)return 0;
10
11        vector<int> counts;
12        for (auto& i : freq) {
13            counts.push_back(i.second);
14        }
15        sort(counts.begin(), counts.end());
16        int ans = 0;
17        for (int i = 0; i < freq.size() - k; i++) {
18            ans += counts[i];
19        }
20        return ans;
21    }
22};