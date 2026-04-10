1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4
5        priority_queue<int, vector<int>, greater<int>> pq;
6
7        for (auto& i : matrix) {
8            for (auto& j : i) {
9                pq.push(j);
10            }
11        }
12
13        while (--k) {
14            pq.pop();
15        }
16
17        return pq.top();
18    }
19};