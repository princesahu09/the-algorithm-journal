1class SeatManager {
2public:
3    priority_queue<int, vector<int>, greater<int>> pq;
4
5    SeatManager(int n) {
6
7        for (int i = 1; i <= n; i++) {
8            pq.push(i);
9        }
10    }
11
12    int reserve() {
13
14        if (pq.empty())
15            return -1;
16        int ans = pq.top();
17        pq.pop();
18
19        return ans;
20    }
21
22    void unreserve(int seatNumber) { pq.push(seatNumber); }
23};
24
25/**
26 * Your SeatManager object will be instantiated and called as such:
27 * SeatManager* obj = new SeatManager(n);
28 * int param_1 = obj->reserve();
29 * obj->unreserve(seatNumber);
30 */