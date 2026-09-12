1class Solution {
2    public int countSpecialIntegers(int[] nums) {
3
4        HashMap<Integer, Integer> freq = new HashMap<>();
5        int ans = 0;
6
7        for (int i : nums) {
8            freq.put(i, freq.getOrDefault(i, 0) + 1);
9        }
10
11        for (int x : freq.keySet()) {
12            if (freq.get(x) == 3) {
13                int a = -1;
14                int b = -1;
15                int c = -1;
16
17                for (int i = 0; i < nums.length; i++) {
18                    if (nums[i] == x) {
19                        if (a == -1) {
20                            a = i;
21                        } else if (b == -1) {
22                            b = i;
23                        } else {
24                            c = i;
25                        }
26                    }
27                }
28
29                if (2 * b == a + c) {
30                    ans++;
31                }
32            }
33
34        }
35        return ans;
36    }
37}