1class Solution {
2
3    class Pair {
4        char number;
5        int freq;
6
7        Pair(char number, int freq) {
8            this.number = number;
9            this.freq = freq;
10        }
11    }
12
13    public int leastInterval(char[] tasks, int n) {
14
15        HashMap<Character, Integer> freq = new HashMap<>();
16        HashMap<Character, Integer> free = new HashMap<>();
17
18        for (char i : tasks) {
19            freq.put(i, freq.getOrDefault(i, 0) + 1);
20            free.put(i, 1);
21        }
22
23        PriorityQueue<Pair> pq = new PriorityQueue<>((a, b) -> b.freq - a.freq);
24
25        for (Map.Entry<Character, Integer> entry : freq.entrySet()) {
26            pq.offer(new Pair(entry.getKey(), entry.getValue()));
27        }
28        int seat = 1;
29        while (!pq.isEmpty()) {
30            List<Pair> cool = new ArrayList<>();
31            while (!pq.isEmpty()) {
32                Pair curr = pq.poll();
33
34                if (free.get(curr.number) <= seat) {
35                    curr.freq--;
36                    if (curr.freq > 0) {
37                        {
38
39                            free.put(curr.number, seat + n + 1);
40                            cool.add(curr);
41                        }
42                    }
43                    break;
44                } else {
45                    cool.add(curr);
46                }
47            }
48
49            for (Pair i : cool) {
50                pq.offer(i);
51
52            }
53            seat++;
54
55        }
56        return seat - 1;
57
58    }
59}