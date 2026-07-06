1class MyCalendarThree {
2
3    Map<Integer, Integer> mp;
4
5    public MyCalendarThree() {
6
7        mp = new TreeMap<>();
8
9    }
10
11    public int book(int startTime, int endTime) {
12
13        mp.put(startTime, mp.getOrDefault(startTime, 0) + 1);
14        mp.put(endTime, mp.getOrDefault(endTime, 0) - 1);
15
16        int ans = Integer.MIN_VALUE;
17        int bookings = 0;
18
19        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
20
21            bookings += entry.getValue();
22            ans = Math.max(bookings, ans);
23        }
24
25        return ans;
26
27    }
28}
29
30/**
31 * Your MyCalendarThree object will be instantiated and called as such:
32 * MyCalendarThree obj = new MyCalendarThree();
33 * int param_1 = obj.book(startTime,endTime);
34 */