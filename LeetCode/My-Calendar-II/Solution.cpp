1class MyCalendarTwo {
2public:
3    vector<vector<int>> overlap;
4    vector<vector<int>> booking;
5    MyCalendarTwo() {}
6
7    bool checkOverlap(int s2, int e2) {
8
9        for (int i = 0; i < overlap.size(); i++) {
10            int s1 = overlap[i][0];
11            int e1 = overlap[i][1];
12
13            if (s2 <= e1 && s1 <= e2) {
14                return true;
15            }
16        }
17
18        return false;
19    }
20
21    void check(int s2, int e2) {
22
23        for (int i = 0; i < booking.size(); i++) {
24            int s1 = booking[i][0];
25            int e1 = booking[i][1];
26
27            if (s2 <= e1 && s1 <= e2) {
28                int s = max(s1, s2);
29                int e = min(e1, e2);
30                overlap.push_back({s, e});
31            }
32        }
33        booking.push_back({s2, e2});
34    }
35
36    bool book(int startTime, int endTime) {
37
38        if (booking.size() == 0) {
39            booking.push_back({startTime, endTime - 1});
40            return true;
41        }
42
43        if (checkOverlap(startTime, endTime - 1)) {
44            return false;
45        }
46
47        check(startTime, endTime - 1);
48
49        return true;
50    }
51};
52
53/**
54 * Your MyCalendarTwo object will be instantiated and called as such:
55 * MyCalendarTwo* obj = new MyCalendarTwo();
56 * bool param_1 = obj->book(startTime,endTime);
57 */