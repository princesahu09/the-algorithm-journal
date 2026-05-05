1class Solution {
2public:
3    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
4
5        vector<int> ans;
6        unordered_map<int, int> mp;
7
8        for (auto& i : barcodes) {
9            mp[i]++;
10        }
11
12        priority_queue<pair<int, int>> pq;
13
14        for (auto& p : mp) {
15            pq.push({p.second, p.first});
16        }
17
18        while (pq.size() >= 2) {
19            auto f1 = pq.top();
20            pq.pop();
21            auto f2 = pq.top();
22            pq.pop();
23
24            ans.push_back(f1.second);
25            ans.push_back(f2.second);
26
27            if (--f1.first > 0)
28                pq.push({f1.first, f1.second});
29            if (--f2.first > 0)
30                pq.push({f2.first, f2.second});
31        }
32
33        if (!pq.empty()) {
34            ans.push_back(pq.top().second);
35        }
36
37        return ans;
38    }
39};