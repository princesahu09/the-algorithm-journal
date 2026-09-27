1class Solution {
2    public int[] rearrangeArray(int[] nums) {
3
4        List<Integer> res = new ArrayList<>();
5
6        TreeMap<Integer, Integer> mp = new TreeMap<>();
7        HashSet<Integer> st = new HashSet<>();
8
9        for (int i : nums) {
10            mp.put(i, mp.getOrDefault(i, 0) + 1);
11
12            st.add(i);
13        }
14
15        while (mp.size() != 0) {
16            int n = mp.size();
17            while (n-- > 0) {
18                for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
19                    res.add(entry.getKey());
20
21                }
22                for (Integer i : st) {
23                    if (mp.containsKey(i)) {
24                        mp.put(i, mp.get(i) - 1);
25                        if (mp.get(i) == 0) {
26                            mp.remove(i);
27                        }
28                    }
29                }
30            }
31        }
32
33        int[] ans = new int[res.size()];
34
35        for (int i = 0; i < res.size(); i++) {
36            ans[i] = res.get(i);
37        }
38        return ans;
39
40    }
41}