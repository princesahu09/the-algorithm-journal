1class Solution {
2    public String getHint(String secret, String guess) {
3
4        int n = secret.length();
5
6        int bull = 0;
7
8        HashSet<Integer> st = new HashSet<>();
9
10        for (int i = 0; i < n; i++) {
11            if (secret.charAt(i) == guess.charAt(i)) {
12                bull++;
13                st.add(i);
14            }
15
16        }
17        int cow = 0;
18
19        HashMap<Character, Integer> gf = new HashMap<>();
20        HashMap<Character, Integer> sf = new HashMap<>();
21
22        for (int i = 0; i < n; i++) {
23            if (!st.contains(i)) {
24                gf.put(guess.charAt(i), gf.getOrDefault(guess.charAt(i), 0) + 1);
25                sf.put(secret.charAt(i), sf.getOrDefault(secret.charAt(i), 0) + 1);
26            }
27        }
28        for (Map.Entry<Character, Integer> entry : gf.entrySet()) {
29            char key = entry.getKey();
30            if (sf.containsKey(key)) {
31                cow += Math.min(sf.get(key), entry.getValue());
32            }
33        }
34
35        StringBuilder ans = new StringBuilder("");
36        ans.append(String.valueOf(bull));
37        ans.append('A');
38        ans.append(String.valueOf(cow));
39        ans.append('B');
40
41        return ans.toString();
42
43    }
44}