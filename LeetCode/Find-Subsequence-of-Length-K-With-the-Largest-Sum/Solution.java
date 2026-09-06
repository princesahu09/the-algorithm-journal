1class Solution {
2    class Pair {
3        int value;
4        int index;
5
6        Pair(int value, int index) {
7            this.value = value;
8            this.index = index;
9        }
10    }
11
12    public int[] maxSubsequence(int[] nums, int k) {
13
14        PriorityQueue<Pair> pq = new PriorityQueue<>((a, b) -> b.value - a.value);
15
16        for (int i = 0; i < nums.length; i++) {
17            pq.offer(new Pair(nums[i], i));
18        }
19        int[] ans = new int[k];
20        int index = 0;
21
22        PriorityQueue<Pair> q = new PriorityQueue<>((a, b) -> a.index - b.index);
23        int limit = k;
24
25        while (!pq.isEmpty() && limit > 0) {
26            q.offer(pq.poll());
27            limit--;
28        }
29
30        for (int i = 0; i < k; i++) {
31            ans[i] = q.poll().value;
32        }
33
34        return ans;
35
36    }
37}