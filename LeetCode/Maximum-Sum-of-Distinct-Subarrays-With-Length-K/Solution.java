1class Solution {
2    public long maximumSubarraySum(int[] nums, int k) {
3
4        HashMap<Integer, Integer> map = new HashMap<>();
5        long sum = 0;
6        long max = 0;
7        int dups = 0;
8
9        for (int i = 0; i < k; i++) {
10            if (!map.containsKey(nums[i])) {
11                map.put(nums[i], 0);
12
13            }
14
15            map.put(nums[i], map.get(nums[i]) + 1);
16
17            sum = sum + nums[i];
18            if (map.get(nums[i]) > 1) {
19                dups += 1;
20            }
21
22        }
23
24        if (dups == 0) {
25            max = Math.max(max, sum);
26        }
27        for (int i = k; i < nums.length; i++) {
28            int numToAdd = nums[i];
29            int numToRemove = nums[i - k];
30
31            if (!map.containsKey(numToAdd)) {
32                map.put(numToAdd, 0);
33            }
34
35            map.put(numToAdd, map.get(numToAdd) + 1);
36
37            if (map.get(numToAdd) > 1) {
38                dups++;
39            }
40
41            if (map.get(numToRemove) > 1) {
42                dups--;
43            }
44            map.put(numToRemove, map.get(numToRemove) - 1);
45
46            sum = sum + numToAdd;
47            sum = sum - numToRemove;
48
49            if (dups == 0) {
50                max = Math.max(sum, max);
51            }
52        }
53
54        return max;
55
56    }
57}