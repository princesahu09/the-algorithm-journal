1class Solution {
2
3    void print(int[] arr) {
4        for (int i : arr) {
5            System.out.print(i + " ");
6        }
7        System.out.println();
8    }
9
10    public int subarraysDivByK(int[] nums, int k) {
11
12        int n = nums.length;
13
14        int prefix = 0;
15
16        int ans = 0;
17
18        int[] freq = new int[k];
19        freq[0] = 1;
20
21        for (int i : nums) {
22            prefix += i;
23
24            int rem = ((prefix % k) + k) % k;
25
26            ans += freq[rem];
27
28            freq[rem]++;
29        }
30
31        return ans;
32
33    }
34}