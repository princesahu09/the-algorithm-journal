1class Solution {
2public:
3    int sum;
4    vector<int> arr;
5
6    int idx;
7    Solution(vector<int>& w) {
8        sum = 0;
9        for (int i = 0; i < w.size(); i++) {
10
11            sum += w[i];
12            arr.push_back(sum);
13        }
14    }
15
16    int pickIndex() {
17        int r = rand() % sum + 1;
18        return lower_bound(arr.begin(), arr.end(), r) - arr.begin();
19    }
20};
21
22/**
23 * Your Solution object will be instantiated and called as such:
24 * Solution* obj = new Solution(w);
25 * int param_1 = obj->pickIndex();
26 */