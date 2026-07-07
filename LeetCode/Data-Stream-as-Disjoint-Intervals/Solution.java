1class SummaryRanges {
2    List<Integer> temp;
3
4    public SummaryRanges() {
5
6        temp = new ArrayList<>();
7
8    }
9
10    public boolean check(int target) {
11        int start = 0;
12        int end = temp.size() - 1;
13
14        while (start <= end) {
15            int mid = start + (end - start) / 2;
16
17            if (temp.get(mid) == target) {
18                return true;
19            }
20
21            else if (temp.get(mid) > target) {
22                end = mid - 1;
23            } else {
24                start = mid + 1;
25            }
26        }
27
28        return false;
29    }
30
31    public void addNum(int value) {
32
33        if (!check(value)) {
34            temp.add(value);
35
36        }
37        return;
38
39    }
40
41    public int[][] getIntervals() {
42
43        if (temp.size() == 0) {
44            return new int[][] {};
45        }
46
47        List<int[]> res = new ArrayList<>();
48
49        Collections.sort(temp);
50
51        int l = -1;
52        int r = -1;
53
54        for (int i = 0; i < temp.size(); i++) {
55
56            if (l == -1 && r == -1) {
57                l = temp.get(i);
58                r = temp.get(i);
59            } else if (temp.get(i) == r + 1) {
60                r = temp.get(i);
61            } else {
62                res.add(new int[] { l, r });
63
64                l = temp.get(i);
65                r = temp.get(i);
66
67            }
68        }
69
70        res.add(new int[] { l, r });
71
72        int[][] ans = new int[res.size()][2];
73
74        for (int i = 0; i < res.size(); i++) {
75            ans[i] = res.get(i);
76        }
77
78        return ans;
79
80    }
81}
82
83/**
84 * Your SummaryRanges object will be instantiated and called as such:
85 * SummaryRanges obj = new SummaryRanges();
86 * obj.addNum(value);
87 * int[][] param_2 = obj.getIntervals();
88 */