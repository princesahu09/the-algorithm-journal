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
13    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
14
15        vector<vector<int>> ans(m, vector<int>(n, -1));
16        if (head == nullptr) {
17            return ans;
18        }
19
20        int srow = 0;
21        int scol = 0;
22        int ecol = n - 1;
23        int erow = m - 1;
24
25        while (srow <= erow && scol <= ecol && head != nullptr) {
26            if (head == nullptr) {
27                break;
28            }
29            for (int j = scol; j <= ecol; j++) {
30                if (head == nullptr) {
31                    break;
32                }
33                ans[srow][j] = head->val;
34                head = head->next;
35            }
36            for (int i = srow + 1; i <= erow; i++) {
37                if (head == nullptr) {
38                    break;
39                }
40
41                ans[i][ecol] = head->val;
42                head = head->next;
43            }
44            if (srow < erow)
45
46            {
47                for (int j = ecol - 1; j >= scol; j--) {
48                    if (head == nullptr) {
49                        break;
50                    }
51                    ans[erow][j] = head->val;
52                    head = head->next;
53                }
54            }
55
56            if (scol < ecol) {
57                for (int i = erow - 1; i > srow; i--) {
58                    if (head == nullptr) {
59                        break;
60                    }
61                    ans[i][scol] = head->val;
62                    head = head->next;
63                }
64            }
65
66            srow++;
67            scol++;
68            erow--;
69            ecol--;
70        }
71
72        return ans;
73    }
74};