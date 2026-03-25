1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Codec {
11public:
12    // Encodes a tree to a single string.
13    void encrypt(TreeNode*& root, string& ans) {
14        if (root == nullptr) {
15            ans += "# ";
16
17            return;
18        }
19
20        ans += to_string(root->val) + " ";
21        encrypt(root->left, ans);
22        encrypt(root->right, ans);
23    }
24    string serialize(TreeNode* root) {
25
26        string ans = "";
27        encrypt(root, ans);
28
29        return ans;
30    }
31
32    // Decodes your encoded data to tree.
33    TreeNode* decrypt(stringstream& ss) {
34        string val;
35        ss >> val;
36
37        if (val == "#")
38            return nullptr;
39
40        TreeNode* root = new TreeNode(stoi(val));
41
42        root->left = decrypt(ss);
43        root->right = decrypt(ss);
44
45        return root;
46    }
47    TreeNode* deserialize(string data) {
48        stringstream ss(data);
49
50        return decrypt(ss);
51    }
52};
53
54// Your Codec object will be instantiated and called as such:
55// Codec* ser = new Codec();
56// Codec* deser = new Codec();
57// string tree = ser->serialize(root);
58// TreeNode* ans = deser->deserialize(tree);
59// return ans;