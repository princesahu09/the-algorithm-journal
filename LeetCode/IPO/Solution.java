1class Solution {
2
3    class Pair {
4        int cost;
5        int profit;
6
7        Pair(int cost, int profit) {
8            this.cost = cost;
9            this.profit = profit;
10        }
11    }
12
13    public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
14
15        List<Pair> arr = new ArrayList<>();
16        int n = profits.length;
17        for (int i = 0; i < n; i++) {
18            arr.add(new Pair(capital[i], profits[i]));
19
20        }
21
22        Collections.sort(arr, (a, b) -> a.cost - b.cost);
23
24        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);
25
26        int i = 0;
27        while (k-- > 0) {
28            while (i < n) {
29                if (arr.get(i).cost > w) {
30                    break;
31                }
32                pq.offer(arr.get(i).profit);
33                i++;
34            }
35
36            if (pq.isEmpty()) {
37                return w;
38            }
39
40            w += pq.poll();
41        }
42
43        return w;
44
45    }
46}