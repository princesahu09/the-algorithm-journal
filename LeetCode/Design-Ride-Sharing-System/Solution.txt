1class RideSharingSystem {
2public:
3    deque<int> rider;
4    deque<int> driver;
5    RideSharingSystem() {}
6
7    void addRider(int riderId) { rider.push_back(riderId); }
8
9    void addDriver(int driverId) { driver.push_back(driverId); }
10
11    vector<int> matchDriverWithRider() {
12
13        if (rider.empty() || driver.empty())
14            return {-1, -1};
15
16      const  int ride = rider.front();
17       const  int drive = driver.front();
18        rider.pop_front();
19        driver.pop_front();
20
21        return {drive, ride};
22    }
23
24    void cancelRider(int riderId) {
25
26        for (auto it = rider.begin(); it != rider.end(); it++) {
27            if (*it == riderId) {
28                rider.erase(it);
29                break;
30            }
31        }
32    }
33};
34
35/**
36 * Your RideSharingSystem object will be instantiated and called as such:
37 * RideSharingSystem* obj = new RideSharingSystem();
38 * obj->addRider(riderId);
39 * obj->addDriver(driverId);
40 * vector<int> param_3 = obj->matchDriverWithRider();
41 * obj->cancelRider(riderId);
42 */