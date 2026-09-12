1class Solution {
2    public int numOfSubarrays(int[] arr, int k, int threshold) {
3
4        int low = 0;
5
6        int sum = 0;
7        int ans = 0;
8        for (int high = 0; high < arr.length; high++) {
9            sum += arr[high];
10
11            while (high - low + 1 > k) {
12                sum -= arr[low];
13                low++;
14            }
15
16            if (high - low + 1 == k) {
17                int avg = sum / (high - low + 1);
18                if (avg >= threshold) {
19                    ans++;
20                }
21            }
22        }
23        return ans;
24
25    }
26}