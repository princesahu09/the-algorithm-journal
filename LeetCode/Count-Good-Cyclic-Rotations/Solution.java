1class Solution {
2    void print(List<Integer> arr) {
3        for (Integer i : arr) {
4            System.out.print(i + " ");
5        }
6        System.out.println();
7    }
8
9    public int countGoodRotations(int[] nums) {
10        int n = nums.length;
11
12        List<Integer> arr = new ArrayList<>();
13        for (int i : nums) {
14            arr.add(i);
15        }
16        for (int i : nums) {
17            arr.add(i);
18        }
19
20        long first = 0;
21        long second = 0;
22        for (int i = 0; i < n; i++) {
23            if (i < n / 2) {
24                first += nums[i];
25            } else {
26                second += nums[i];
27            }
28
29        }
30
31        int ans = 0;
32
33        int i = 0;
34        int j = n / 2;
35        int k = n;
36
37        while (k < 2 * n) {
38            if (first > second) {
39                ans++;
40            }
41            first -= arr.get(i);
42            first += arr.get(j);
43            second -= arr.get(j);
44            second += arr.get(k);
45
46            i++;
47            j++;
48            k++;
49        }
50
51        return ans;
52
53    }
54}