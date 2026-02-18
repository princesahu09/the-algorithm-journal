1class RecentCounter {
2public:
3    vector<int> req;
4    RecentCounter() {}
5
6    int ping(int t) {
7        int val = max(t - 3000, t);
8        req.push_back(val);
9        int counter = 0;
10        int start = min(t - 3000, t);
11        int end = max(t - 3000, t);
12        for (auto& i : req) {
13            if (i >= start && i <= end)
14                counter++;
15        }
16        return counter;
17    }
18};
19
20/**
21 * Your RecentCounter object will be instantiated and called as such:
22 * RecentCounter* obj = new RecentCounter();
23 * int param_1 = obj->ping(t);
24 */