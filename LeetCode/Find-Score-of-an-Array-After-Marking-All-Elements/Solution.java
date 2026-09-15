1class Solution {
2
3    class Pair {
4        int v;
5        int index;
6
7        Pair(int v, int index) {
8            this.v = v;
9            this.index = index;
10        }
11    }
12
13    public long findScore(int[] nums) {
14        int n = nums.length;
15
16        PriorityQueue<Pair> pq = new PriorityQueue<>((a, b) -> {
17            if (a.v == b.v) {
18                return a.index - b.index;
19            }
20            return a.v - b.v;
21        });
22
23        for (int i = 0; i < nums.length; i++) {
24            pq.offer(new Pair(nums[i], i));
25        }
26        HashSet<Integer> st = new HashSet<>();
27
28        long ans = 0;
29        while (!pq.isEmpty()) {
30
31            Pair curr = pq.poll();
32            if (!st.contains(curr.index)) {
33                ans += curr.v;
34                int left = curr.index - 1;
35                int right = curr.index + 1;
36                if (left >= 0) {
37                    st.add(left);
38                }
39                if (right < n) {
40                    st.add(right);
41                }
42            }
43        }
44
45        return ans;
46
47    }
48}