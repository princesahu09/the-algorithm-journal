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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* curr = head;
15        ListNode* prev = nullptr;
16        ListNode* future = nullptr;
17
18        while(curr){
19            future = curr->next;
20            curr->next=prev;
21            prev = curr;
22            curr = future;
23        }
24        return prev;
25    }
26};