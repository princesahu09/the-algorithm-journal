1class Solution {
2    int max(int[] arr) {
3        int ans = Integer.MIN_VALUE;
4        for (int i : arr) {
5            ans = Math.max(ans, i);
6        }
7
8        return ans;
9    }
10
11    public int characterReplacement(String s, int k) {
12
13        int[] freq = new int[26];
14        int ans = 0;
15
16        int low = 0;
17        int n = s.length();
18        for (int high = 0; high < n; high++) {
19            char ch = s.charAt(high);
20            freq[ch - 'A']++;
21            int len = high - low + 1;
22            int big = max(freq);
23            int diff = len - big;
24
25            while (diff > k) {
26                freq[s.charAt(low) - 'A']--;
27                low++;
28                big = max(freq);
29                len = high - low + 1;
30                diff = len - big;
31            }
32
33            ans = Math.max(ans, high - low + 1);
34
35        }
36
37        return ans;
38
39    }
40}