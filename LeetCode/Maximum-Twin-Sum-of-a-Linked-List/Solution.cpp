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
13    int pairSum(ListNode* head) {
14
15        deque<int>q;
16
17        ListNode* temp=head;
18
19        while(temp)
20        {
21            q.push_front(temp->val);
22            temp=temp->next;
23        }
24
25        int ans=INT_MIN;
26
27        while(!q.empty())
28        {
29
30            ans=max(ans,q.front()+q.back());
31            q.pop_back();
32            q.pop_front();
33        }
34
35        return ans;
36        
37    }
38};