1class MyCalendarTwo {
2
3    Map<Integer, Integer> counts;
4
5    public MyCalendarTwo() {
6
7        counts = new TreeMap<>();
8
9    }
10
11    public boolean book(int startTime, int endTime) {
12
13        counts.put(startTime, counts.getOrDefault(startTime, 0) + 1);
14        counts.put(endTime, counts.getOrDefault(endTime, 0) - 1);
15
16        int bookings = 0;
17        for (Map.Entry<Integer, Integer> entry : counts.entrySet()) {
18
19            bookings += entry.getValue();
20
21            if (bookings > 2) {
22                counts.put(startTime, counts.get(startTime) - 1);
23                counts.put(endTime, counts.get(endTime) + 1);
24
25                return false;
26            }
27
28        }
29
30        return true;
31
32    }
33}
34
35/**
36 * Your MyCalendarTwo object will be instantiated and called as such:
37 * MyCalendarTwo obj = new MyCalendarTwo();
38 * boolean param_1 = obj.book(startTime,endTime);
39 */