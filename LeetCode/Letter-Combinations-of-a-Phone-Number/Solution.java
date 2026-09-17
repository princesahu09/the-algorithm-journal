1class Solution {
2    HashMap<Character, String> mp = new HashMap<>();
3    List<String> ans = new ArrayList<>();
4
5    void solve(String digits, int index, StringBuilder str) {
6        if (index == digits.length()) {
7            ans.add(str.toString());
8            return;
9        }
10        String word = mp.get(digits.charAt(index));
11
12        for (int i = 0; i < word.length(); i++) {
13            str.append(word.charAt(i));
14            solve(digits, index + 1, str);
15            str.deleteCharAt(str.length() - 1);
16
17        }
18
19        return;
20    }
21
22    public List<String> letterCombinations(String digits) {
23        mp.put('2', "abc");
24        mp.put('3', "def");
25        mp.put('4', "ghi");
26        mp.put('5', "jkl");
27        mp.put('6', "mno");
28        mp.put('7', "pqrs");
29        mp.put('8', "tuv");
30        mp.put('9', "wxyz");
31
32        solve(digits, 0, new StringBuilder(""));
33
34        return ans;
35
36    }
37}