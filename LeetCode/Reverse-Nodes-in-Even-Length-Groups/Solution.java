1/**
2 * Definition for singly-linked list.
3 * public class ListNode {
4 *     int val;
5 *     ListNode next;
6 *     ListNode() {}
7 *     ListNode(int val) { this.val = val; }
8 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
9 * }
10 */
11class Solution {
12    public ListNode reverseEvenLengthGroups(ListNode head) {
13        List<ListNode> arr = new ArrayList<>();
14
15        ListNode temp = head;
16        while (temp != null) {
17            arr.add(temp);
18            temp = temp.next;
19        }
20        int group = 1;
21
22        for (int i = 0; i < arr.size();) {
23            int limit = group;
24            int j = i;
25            while (j < arr.size() && limit > 0) {
26
27                limit--;
28                j++;
29            }
30
31            int size = j - i;
32            if (size % 2 == 0) {
33                Stack<ListNode> st = new Stack<>();
34                int k = i;
35                while (k < j) {
36                    st.add(arr.get(k));
37                    k++;
38                }
39                k = i;
40                while (!st.isEmpty()) {
41                    arr.set(k++, st.pop());
42
43                }
44            }
45            group++;
46            i = j;
47        }
48
49        ListNode head2 = arr.get(0);
50        ListNode temp2 = head2;
51
52        for (int i = 1; i < arr.size(); i++) {
53            temp2.next = arr.get(i);
54            temp2 = temp2.next;
55        }
56
57        temp2.next = null;
58
59        return head2;
60
61    }
62}