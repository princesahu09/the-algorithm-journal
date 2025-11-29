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
13class Solution {
14
15private:
16    void solve(TreeNode* root, vector<string>& ans,string temp) {
17        
18        if (!root) {
19            return ;
20        }
21
22        temp+=to_string(root->val);
23        if (root->left == nullptr && root->right == nullptr) {
24            ans.push_back(temp);
25            temp="";
26
27
28        }
29        temp+="->";
30        solve(root->left,ans,temp);
31        solve(root->right,ans,temp);
32    }
33
34public:
35    vector<string> binaryTreePaths(TreeNode* root) {
36
37        vector<string> ans;
38        solve(root, ans,"");
39        return ans;
40    }
41};