1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class BSTIterator {
14public:
15    vector<int> ans;
16
17    int idx = 0;
18    BSTIterator(TreeNode* root) { converter(root); }
19
20    void converter(TreeNode* root) {
21
22        if (root == nullptr) {
23            return;
24        }
25        converter(root->left);
26        ans.push_back(root->val);
27        converter(root->right);
28    }
29
30    int next() {
31
32        int r = ans[idx];
33        idx++;
34
35        return r;
36    }
37
38    bool hasNext() { return idx < ans.size() ; }
39};
40
41/**
42 * Your BSTIterator object will be instantiated and called as such:
43 * BSTIterator* obj = new BSTIterator(root);
44 * int param_1 = obj->next();
45 * bool param_2 = obj->hasNext();
46 */