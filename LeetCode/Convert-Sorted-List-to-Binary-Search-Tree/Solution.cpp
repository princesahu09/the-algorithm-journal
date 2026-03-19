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
11/**
12 * Definition for a binary tree node.
13 * struct TreeNode {
14 *     int val;
15 *     TreeNode *left;
16 *     TreeNode *right;
17 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
18 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
19 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
20 * right(right) {}
21 * };
22 */
23class Solution {
24public:
25    TreeNode* builder(vector<int>& nums, int left, int right) {
26        if (left > right) {
27            return nullptr;
28        }
29        int mid = (right + left) / 2;
30
31        TreeNode* root = new TreeNode(nums[mid]);
32
33        root->left = builder(nums, left, mid - 1);
34        root->right = builder(nums, mid + 1, right);
35
36        return root;
37    }
38    TreeNode* sortedListToBST(ListNode* head) {
39
40        vector<int> nums;
41
42        ListNode* temp = head;
43
44        while (temp != nullptr) {
45            nums.push_back(temp->val);
46            temp = temp->next;
47        }
48
49        return builder(nums, 0, nums.size() - 1);
50    }
51};