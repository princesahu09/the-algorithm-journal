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
13    ListNode* mergeKLists(vector<ListNode*>& lists) {
14
15        priority_queue<int, vector<int>, greater<int>> pq;
16
17        for (int i = 0; i < lists.size(); i++)
18
19        {
20            ListNode* temp = lists[i];
21
22            while (temp) {
23                pq.push(temp->val);
24                temp = temp->next;
25            }
26        }
27        ListNode* ans = new ListNode(-1);
28        ListNode* tail = ans;
29        while (!pq.empty()) {
30            int val = pq.top();
31            pq.pop();
32            ListNode* newNode = new ListNode(val);
33            tail->next = newNode;
34            tail = newNode;
35        }
36
37        return ans->next;
38    }
39};