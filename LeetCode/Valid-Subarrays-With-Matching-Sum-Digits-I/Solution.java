1class Solution {
2
3    boolean check(long number, int x) {
4
5        String temp = String.valueOf(number);
6
7        int first = (int) (temp.charAt(0) - '0');
8        int last = (int) (temp.charAt(temp.length() - 1) - '0');
9
10        return first == x && last == x;
11    }
12
13    public int countValidSubarrays(int[] nums, int x) {
14
15        int n = nums.length;
16        int ans = 0;
17
18        long[] prefix = new long[n];
19        prefix[0] = nums[0];
20
21        for (int i = 1; i < n; i++) {
22            prefix[i] = prefix[i - 1] + nums[i];
23        }
24
25        for (int i = 0; i < n; i++) {
26
27            for (int j = i; j < n; j++) {
28
29                long sum = 0;
30                if (i == 0) {
31                    sum = prefix[j];
32                } else {
33                    sum = prefix[j] - prefix[i - 1];
34
35                }
36                if (check(sum, x)) {
37                    ans++;
38                }
39
40            }
41
42        }
43
44        return ans;
45
46    }
47}