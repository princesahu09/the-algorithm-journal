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
13    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
14
15        vector<int> vec;
16
17        while (head) {
18            vec.push_back(head->val);
19            head = head->next;
20        }
21
22        vector<int> ans;
23
24        for (int i = 1; i + 1 < vec.size(); i++) {
25            if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
26                ans.push_back(i);
27            }
28            if (vec[i + 1] > vec[i] && vec[i - 1] > vec[i]) {
29                ans.push_back(i);
30            }
31        }
32
33        if (ans.size() < 2) {
34            return {-1, -1};
35        }
36
37        int high = INT_MIN;
38
39        int low = INT_MAX;
40
41        high = ans.back() - ans.front();
42
43        for (int i = 1; i < ans.size(); i++) {
44
45            low = min(low, ans[i] - ans[i - 1]);
46        }
47
48        return {low, high};
49    }
50};