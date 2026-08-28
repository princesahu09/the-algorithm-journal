1class Solution {
2    public int[] secondGreaterElement(int[] nums) {
3        int n = nums.length;
4        int[] ans = new int[n];
5        Arrays.fill(ans, -1);
6
7        Stack<Integer> s1 = new Stack<>();
8        Stack<Integer> s2 = new Stack<>();
9
10        for (int i = 0; i < n; i++) {
11            int temp = nums[i];
12
13            while (!s2.isEmpty() && temp > nums[s2.peek()]) {
14                ans[s2.pop()] = temp;
15            }
16
17            Stack<Integer> tempStack = new Stack<>();
18
19            while (!s1.isEmpty() && temp > nums[s1.peek()]) {
20                tempStack.push(s1.pop());
21            }
22
23            while (!tempStack.isEmpty()) {
24                s2.push(tempStack.pop());
25            }
26
27            s1.push(i);
28        }
29        return ans;
30
31    }
32}