1class SeatManager {
2public:
3priority_queue<int,vector<int>,greater<int>>pq;
4
5    SeatManager(int n) {
6
7        for(int i=1;i<=n;i++)
8        {
9            pq.push(i);
10            
11        }
12        
13    }
14    
15    int reserve() {
16
17        if(pq.empty()) return -1;
18        int ans=pq.top();
19        pq.pop();
20
21
22        return ans;
23        
24    }
25    
26    void unreserve(int seatNumber) {
27        pq.push(seatNumber);
28        
29    }
30};
31
32/**
33 * Your SeatManager object will be instantiated and called as such:
34 * SeatManager* obj = new SeatManager(n);
35 * int param_1 = obj->reserve();
36 * obj->unreserve(seatNumber);
37 */