1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode* detectCycle(ListNode* head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14        bool cycle = false;
15
16        while (fast && fast->next) {
17            slow = slow->next;
18            fast = fast->next->next;
19            if (slow == fast) {
20                cycle = true;
21                break;
22            }
23        }
24        if (!cycle)
25            return nullptr;
26        slow = head;
27       
28        while (fast != slow) {
29            slow = slow->next;
30            fast = fast->next;
31            
32        }
33
34        return slow;
35    }
36};