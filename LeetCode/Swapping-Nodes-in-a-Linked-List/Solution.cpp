1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    int len(ListNode* head) {
14        int ans = 0;
15        while (head) {
16            ans++;
17            head = head->next;
18        }
19
20        return ans;
21    }
22    ListNode* swapNodes(ListNode* head, int k) {
23        int n = len(head);
24
25        int i = k;
26        int j = n - k + 1;
27        ListNode* start = head;
28        ListNode* last = head;
29
30        while (--i) {
31            start = start->next;
32            ;
33        }
34        while (--j) {
35            last = last->next;
36        }
37        int temp = start->val;
38        start->val = last->val;
39        last->val = temp;
40
41        return head;
42    }
43};