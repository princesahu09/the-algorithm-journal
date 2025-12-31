1class Solution {
2public:
3    string findCommonResponse(vector<vector<string>>& responses) {
4
5        unordered_map<string, int> record;
6
7        for (auto& i : responses) {
8            unordered_set<string> review;
9            for (auto& j : i) {
10                review.insert(j);
11            }
12            for (auto& k : review) {
13                record[k]++;
14            }
15        }
16
17        vector<pair<string,int>>vec(record.begin(),record.end());
18
19        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
20
21            if(a.second==b.second)
22            return a.first<b.first;
23            return a.second>b.second;
24        });
25        pair<string,int>ans= vec.front();
26
27        return ans.first;
28    }
29};