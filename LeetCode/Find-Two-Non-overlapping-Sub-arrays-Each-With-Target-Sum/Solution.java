1class Solution {
2
3    class Pair {
4        int first;
5        int second;
6
7        Pair(int first, int second) {
8            this.first = first;
9            this.second = second;
10        }
11    }
12
13    public int minSumOfLengths(int[] arr, int target) {
14
15        List<Pair> nums = new ArrayList<>();
16
17        int low = 0;
18        int sum = 0;
19
20        for (int high = 0; high < arr.length; high++) {
21            sum += arr[high];
22
23            while (sum > target) {
24                sum -= arr[low];
25                low++;
26            }
27
28            if (sum == target) {
29                nums.add(new Pair(low, high));
30            }
31
32        }
33
34        if (nums.size() < 2) {
35            return -1;
36        }
37
38        int ans = Integer.MAX_VALUE;
39        int minLength = Integer.MAX_VALUE;
40
41        int j = 0;
42
43        for (int i = 0; i < nums.size(); i++) {
44
45            int s1 = nums.get(i).first;
46            int e1 = nums.get(i).second;
47
48            while (j < nums.size() && nums.get(j).second < s1) {
49
50                int len = nums.get(j).second
51                        - nums.get(j).first + 1;
52
53                minLength = Math.min(minLength, len);
54
55                j++;
56            }
57
58            if (minLength != Integer.MAX_VALUE) {
59
60                int currentLength = e1 - s1 + 1;
61
62                ans = Math.min(
63                        ans,
64                        minLength + currentLength);
65            }
66        }
67
68        return ans == Integer.MAX_VALUE ? -1 : ans;
69
70    }
71}