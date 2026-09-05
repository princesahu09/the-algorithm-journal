1class Solution {
2    public List<Integer> findClosestElements(int[] arr, int k, int x) {
3
4        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> {
5            if (Math.abs(a - x) == Math.abs(b - x)) {
6                return a - b;
7            }
8            return Math.abs(a - x) - Math.abs(b - x);
9        });
10
11        for (int i = 0; i < arr.length; i++) {
12            pq.offer(arr[i]);
13        }
14        List<Integer> ans = new ArrayList<>();
15
16        while (!pq.isEmpty() && k > 0) {
17            ans.add(pq.poll());
18            k--;
19        }
20        Collections.sort(ans);
21        return ans;
22
23    }
24}