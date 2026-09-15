1class Solution {
2
3    boolean check(HashMap<Character, Integer> freq, int k) {
4        for (Map.Entry<Character, Integer> entry : freq.entrySet()) {
5            if (entry.getValue() < k) {
6                return false;
7            }
8        }
9        return true;
10    }
11
12    public int longestSubstring(String s, int k) {
13        int n = s.length();
14
15        int ans = 0;
16        for (int ut = 1; ut <= 26; ut++) {
17            int low = 0;
18            HashMap<Character, Integer> freq = new HashMap<>();
19            for (int high = 0; high < s.length(); high++) {
20                freq.put(s.charAt(high), freq.getOrDefault(s.charAt(high), 0) + 1);
21                while (freq.size() > ut) {
22                    freq.put(s.charAt(low), freq.getOrDefault(s.charAt(low), 0) - 1);
23                    if (freq.get(s.charAt(low)) == 0) {
24                        freq.remove(s.charAt(low));
25                    }
26
27                    low++;
28
29                }
30                if (freq.size() == ut && check(freq, k)) {
31                    ans = Math.max(ans, high - low + 1);
32                }
33
34            }
35        }
36        return ans;
37
38    }
39}