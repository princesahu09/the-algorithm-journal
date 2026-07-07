1class SummaryRanges {
2    TreeSet<Integer> temp;
3
4    public SummaryRanges() {
5
6        temp = new TreeSet<>();
7
8    }
9
10    public void addNum(int value) {
11
12        temp.add(value);
13
14    }
15
16    public int[][] getIntervals() {
17
18        if (temp.size() == 0) {
19            return new int[][] {};
20        }
21
22        List<int[]> res = new ArrayList<>();
23
24        int l = -1;
25        int r = -1;
26
27        for (Integer val : temp) {
28
29            if (l == -1 && r == -1) {
30                l = val;
31                r = val;
32            } else if (val == r + 1) {
33                r = val;
34            } else {
35                res.add(new int[] { l, r });
36
37                l = val;
38                r = val;
39
40            }
41        }
42
43        res.add(new int[] { l, r });
44
45        int[][] ans = new int[res.size()][2];
46
47        for (int i = 0; i < res.size(); i++) {
48            ans[i] = res.get(i);
49        }
50
51        return ans;
52
53    }
54}
55
56/**
57 * Your SummaryRanges object will be instantiated and called as such:
58 * SummaryRanges obj = new SummaryRanges();
59 * obj.addNum(value);
60 * int[][] param_2 = obj.getIntervals();
61 */