1class Solution {
2    public int numberOfSubstrings(String s) {
3        int low = 0;
4        HashMap<Character, Integer> freq = new HashMap<>();
5        int ans = 0;
6
7        for (int high = 0; high < s.length(); high++) {
8
9            freq.put(s.charAt(high), freq.getOrDefault(s.charAt(high), 0) + 1);
10
11            while (freq.size() == 3) {
12                freq.put(s.charAt(low), freq.getOrDefault(s.charAt(low), 0) - 1);
13                if (freq.get(s.charAt(low)) == 0) {
14                    freq.remove(s.charAt(low));
15                }
16                ans += s.length() - high;
17                low++;
18            }
19
20        }
21        return ans;
22
23    }
24}