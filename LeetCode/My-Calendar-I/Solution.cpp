1class MyCalendar {
2public:
3    vector<vector<int>> booking;
4    MyCalendar() {}
5
6    bool check(int s2, int e2) {
7
8        for (int i = 0; i < booking.size(); i++) {
9            int s1 = booking[i][0];
10            int e1 = booking[i][1];
11
12            if (s2 <= e1 && s1 <= e2) {
13                return true;
14            }
15        }
16        booking.push_back({s2, e2});
17
18        return false;
19    }
20
21    bool book(int startTime, int endTime) {
22
23        if (booking.size() == 0) {
24            booking.push_back({startTime, endTime - 1});
25            return true;
26        }
27
28        if (check(startTime, endTime-1)) {
29            return false;
30        }
31
32        return true;
33    }
34};
35
36/**
37 * Your MyCalendar object will be instantiated and called as such:
38 * MyCalendar* obj = new MyCalendar();
39 * bool param_1 = obj->book(startTime,endTime);
40 */