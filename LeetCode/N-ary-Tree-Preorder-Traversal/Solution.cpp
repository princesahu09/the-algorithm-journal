1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> children;
7
8    Node() {}
9
10    Node(int _val) {
11        val = _val;
12    }
13
14    Node(int _val, vector<Node*> _children) {
15        val = _val;
16        children = _children;
17    }
18};
19*/
20
21class Solution {
22public:
23
24void solve(Node* root,vector<int>&ans)
25{
26    if(root==nullptr)
27    {
28        return ;
29    }
30    ans.push_back(root->val);
31
32    for(auto &i:root->children)
33    {
34        solve(i,ans);
35        
36
37    }
38}
39    vector<int> preorder(Node* root) {
40
41        vector<int>ans;
42        solve(root,ans);
43        return ans;
44        
45    }
46};