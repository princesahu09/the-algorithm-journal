1class Solution {
2    public int minimumPushes(String word) {
3        if (word.length() <= 8) {
4            return word.length();
5        }
6        int ans = 0;
7
8        int[] freq = new int[26];
9
10        for (int i = 0; i < word.length(); i++) {
11            int key = (int) (word.charAt(i) - 'a');
12
13            freq[key] += 1;
14        }
15        System.out.println(Arrays.toString(freq));
16
17        Arrays.sort(freq);
18        System.out.println(Arrays.toString(freq));
19        int start = 0;
20        int end = freq.length - 1;
21        while (start <= end) {
22            int temp = freq[start];
23            freq[start] = freq[end];
24            freq[end] = temp;
25            start++;
26            end--;
27        }
28
29        System.out.println(Arrays.toString(freq));
30        int i = 0;
31        int factor = 1;
32        while (i <= 7) {
33            ans += (freq[i] * factor);
34            i++;
35        }
36        factor++;
37        while (i <= 15) {
38            ans += (freq[i] * factor);
39            i++;
40        }
41        factor++;
42
43        while (i <= 23) {
44            ans += (freq[i] * factor);
45            i++;
46
47        }
48        factor++;
49
50        while (i < 26) {
51            ans += (freq[i] * factor);
52            i++;
53
54        }
55
56        return ans;
57
58    }
59}