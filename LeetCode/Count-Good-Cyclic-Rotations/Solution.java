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
12       
13
14        long first = 0;
15        long second = 0;
16        for (int i = 0; i < n; i++) {
17            if (i < n / 2) {
18                first += nums[i];
19            } else {
20                second += nums[i];
21            }
22
23        }
24
25        int ans = 0;
26
27        int i = 0;
28        int j = n / 2;
29        int k = n;
30
31        while (k < 2 * n) {
32            if (first > second) {
33                ans++;
34            }
35            first -= nums[i%n];
36            first += nums[j%n];
37            second -= nums[j%n];
38            second +=nums[k%n];
39
40            i++;
41            j++;
42            k++;
43        }
44
45        return ans;
46
47    }
48}