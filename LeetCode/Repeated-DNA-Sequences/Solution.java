1class Solution {
2    public List<String> findRepeatedDnaSequences(String s) {
3
4        int k = 10;
5
6        int low = 0;
7
8        HashMap<String, Integer> freq = new HashMap<>();
9
10        for (int high = 0; high < s.length(); high++) {
11
12            while (high - low + 1 > k) {
13                low++;
14            }
15
16            if (high - low + 1 == k) {
17                String temp = s.substring(low, high + 1);
18
19                freq.put(temp, freq.getOrDefault(temp, 0) + 1);
20            }
21
22            // low++;
23
24        }
25
26        List<String> ans = new ArrayList<>();
27
28        for (Map.Entry<String, Integer> entry : freq.entrySet()) {
29            if (entry.getValue() > 1) {
30                ans.add(entry.getKey());
31            }
32        }
33
34        return ans;
35
36    }
37}