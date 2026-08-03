1class Solution {
2    public int sumCounts(List<Integer> nums) {
3
4        int ans = 0;
5
6        for (int i = 0; i < nums.size(); i++) {
7            Set<Integer> st = new HashSet<>();
8            for (int j = i; j < nums.size(); j++) {
9
10                st.add(nums.get(j));
11                int len = st.size();
12                ans += (len * len);
13            }
14
15        }
16        return ans;
17
18    }
19}