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
13    ListNode* doubleIt(ListNode* head) {
14
15        stack<int> st;
16        ListNode* temp = head;
17
18        while (temp) {
19            st.push(temp->val);
20            temp = temp->next;
21        }
22
23        ListNode* ans = new ListNode(-1);
24        int keep = 0;
25        int carry = 0;
26
27        while (!st.empty()) {
28            int a = 2 * st.top();
29
30            keep = a % 10;
31            ListNode* newNode = new ListNode(keep + carry);
32            carry = a / 10;
33            newNode->next = ans->next;
34            ans->next = newNode;
35
36            st.pop();
37        }
38        if (carry != 0) {
39            ListNode* newNode = new ListNode(carry);
40            newNode->next = ans->next;
41            ans->next = newNode;
42        }
43
44        return ans->next;
45    }
46};