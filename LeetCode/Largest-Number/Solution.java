1class Solution {
2    public String largestNumber(int[] nums) {
3
4        TreeMap<String, Integer> table = new TreeMap<>((a, b) -> {
5            int c = (b + a).compareTo(a + b);
6
7            if (c != 0) {
8                return c;
9            }
10
11            return b.compareTo(a);
12        });
13        StringBuffer ans = new StringBuffer("");
14
15        for (int i = 0; i < nums.length; i++) {
16            String temp = String.valueOf(nums[i]);
17
18            table.put(temp, table.getOrDefault(temp, 0) + 1);
19        }
20
21        for (Map.Entry<String, Integer> entry : table.entrySet()) {
22            String temp = entry.getKey();
23            int counter = entry.getValue();
24
25            while (counter-- > 0) {
26                ans.append(temp);
27            }
28        }
29
30        if (ans.charAt(0) == '0') {
31            return "0";
32        }
33
34        return ans.toString();
35    }
36}