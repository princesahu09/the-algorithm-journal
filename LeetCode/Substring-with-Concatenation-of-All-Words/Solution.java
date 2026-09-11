1class Solution {
2
3    boolean check(HashMap<String, Integer> freq, String str, int wordLen) {
4        HashMap<String, Integer> st = new HashMap<>();
5
6        for (int i = 0; i < str.length(); i += wordLen) {
7            String temp = str.substring(i, i + wordLen);
8
9            st.put(temp, st.getOrDefault(temp, 0) + 1);
10
11        }
12
13        // for (Map.Entry<String, Integer> entry : freq.entrySet()) {
14        //     String key = entry.getKey();
15        //     int value = entry.getValue();
16
17        //     if (st.containsKey(key)) {
18        //         int v = st.get(key);
19        //         if (v < value) {
20        //             return false;
21
22        //         }
23
24        //     } else {
25        //         return false;
26        //     }
27
28        // }
29        return st.equals(freq);
30
31    }
32
33    public List<Integer> findSubstring(String s, String[] words) {
34
35        HashMap<String, Integer> freq = new HashMap<>();
36        for (String i : words) {
37            freq.put(i, freq.getOrDefault(i, 0) + 1);
38        }
39
40        int wordLen = words[0].length();
41        int n = words.length;
42
43        int k = wordLen * n;
44
45        List<Integer> ans = new ArrayList<>();
46
47        int low = 0;
48
49        for (int high = 0; high < s.length(); high++) {
50
51            while (high - low + 1 > k) {
52                low++;
53            }
54
55            if (high - low + 1 == k) {
56
57                String window = s.substring(low, high + 1);
58
59                if (check(freq, window, wordLen)) {
60                    ans.add(low);
61                }
62            }
63
64        }
65
66        return ans;
67
68    }
69}