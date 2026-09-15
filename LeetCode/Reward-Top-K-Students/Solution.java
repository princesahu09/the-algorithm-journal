1class Solution {
2
3    class Pair {
4        int id;
5        int score;
6
7        Pair(int id, int score) {
8            this.id = id;
9            this.score = score;
10        }
11    }
12
13    public List<Integer> topStudents(String[] positive_feedback, String[] negative_feedback, String[] report,
14            int[] student_id, int k) {
15
16        PriorityQueue<Pair> pq = new PriorityQueue<>((a, b) -> {
17
18            if (a.score == b.score) {
19                return a.id - b.id;
20            }
21            return b.score - a.score;
22        });
23        List<Integer> ans = new ArrayList<>();
24
25        HashMap<String, Integer> cost = new HashMap<>();
26        for (String i : positive_feedback) {
27            cost.put(i, 3);
28        }
29        for (String i : negative_feedback) {
30            cost.put(i, -1);
31        }
32
33        for (int i = 0; i < report.length; i++) {
34            String[] temp = report[i].split(" ");
35            int score = 0;
36            for (int j = 0; j < temp.length; j++) {
37                String key = temp[j];
38                if (cost.containsKey(key)) {
39                    score += cost.get(key);
40                }
41            }
42
43            pq.offer(new Pair(student_id[i], score));
44
45        }
46
47        while (!pq.isEmpty() && k > 0) {
48            ans.add(pq.poll().id);
49            k--;
50        }
51
52        return ans;
53
54    }
55}