1class Solution {
2    public int minimumSum(int n, int k) {
3
4        HashSet<Integer> st = new HashSet<>();
5        int i = 1;
6
7        while (st.size() < n) {
8            if (!st.contains(k - i)) {
9                st.add(i);
10            }
11            i++;
12        }
13
14        int ans = 0;
15        for (int x : st) {
16            ans += x;
17        }
18        return ans;
19    }
20}