1class Solution {
2    class Pair {
3        String word;
4        int val;
5
6        Pair(String word, int val) {
7            this.word = word;
8            this.val = val;
9        }
10    }
11
12    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
13
14        HashSet<String> mp = new HashSet<>();
15
16        for (String i : wordList) {
17            mp.add(i);
18        }
19        if (!mp.contains(endWord)) {
20            return 0;
21        }
22
23        Queue<Pair> q = new ArrayDeque<>();
24
25        q.offer(new Pair(beginWord, 1));
26        if (mp.contains(beginWord)) {
27            mp.remove(beginWord);
28        }
29
30        while (!q.isEmpty()) {
31
32            Pair curr = q.poll();
33            if (curr.word.equals(endWord)) {
34                return curr.val;
35            }
36            char[] word = curr.word.toCharArray();
37
38            for (int i = 0; i < word.length; i++) {
39                char c = word[i];
40
41                for (int j = 97; j <= 122; j++) {
42                    if (c == j) {
43                        continue;
44                    }
45
46                    word[i] = (char) j;
47
48                    String temp = String.valueOf(word);
49
50                    if (mp.contains(temp)) {
51                        q.offer(new Pair(temp, curr.val + 1));
52                        mp.remove(temp);
53                    }
54
55                }
56                word[i] = c;
57            }
58
59        }
60
61        return 0;
62
63    }
64}