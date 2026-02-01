1class RideSharingSystem {
2public:
3    queue<int> rider;
4    queue<int> driver;
5    RideSharingSystem() {}
6
7    void addRider(int riderId) { rider.push(riderId); }
8
9    void addDriver(int driverId) { driver.push(driverId); }
10
11    vector<int> matchDriverWithRider() {
12
13        if (rider.empty() || driver.empty())
14            return {-1, -1};
15
16        const int ride = rider.front();
17        const int drive = driver.front();
18        rider.pop();
19        driver.pop();
20
21        return {drive, ride};
22    }
23
24    void cancelRider(int riderId) {
25
26        // for (auto it = rider.begin(); it != rider.end(); it++) {
27        //     if (*it == riderId) {
28        //         rider.erase(it);
29        //         break;
30        //     }
31        // }
32        queue<int> holder;
33        while (!rider.empty()) {
34            int top = rider.front();
35            rider.pop();
36            if (top != riderId) 
37              holder.push(top);
38            
39        }
40        while(!holder.empty())
41        {
42           
43            rider.push(holder.front());
44            holder.pop();
45        }
46    }
47};
48
49/**
50 * Your RideSharingSystem object will be instantiated and called as such:
51 * RideSharingSystem* obj = new RideSharingSystem();
52 * obj->addRider(riderId);
53 * obj->addDriver(driverId);
54 * vector<int> param_3 = obj->matchDriverWithRider();
55 * obj->cancelRider(riderId);
56 */