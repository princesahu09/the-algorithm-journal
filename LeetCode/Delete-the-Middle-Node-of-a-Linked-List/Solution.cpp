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
13    ListNode* deleteMiddle(ListNode* head) {
14
15        if(head->next==nullptr)return nullptr;
16
17        ListNode* slow = head;
18        ListNode* fast = head;
19        ListNode* prev = nullptr;
20
21        while (slow&&fast && fast->next) {
22            prev = slow;
23            slow = slow->next;
24            fast = fast->next->next;
25        }
26
27       
28        prev->next=slow->next;
29       
30
31        return head;
32    }
33};