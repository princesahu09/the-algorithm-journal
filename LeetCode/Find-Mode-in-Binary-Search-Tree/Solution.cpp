1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13
14    private:  void solve(TreeNode* root,unordered_map<int,int>&freq)
15    {
16        if(!root)return;
17        
18
19      
20        freq[root->val]++;
21
22        solve(root->left,freq);
23        solve(root->right,freq);
24
25       
26    }
27public:
28    vector<int> findMode(TreeNode* root) {
29
30        unordered_map<int,int>freq;
31
32        
33        solve(root,freq);
34         int maxFreq = 0;
35        for(auto &x : freq){
36            maxFreq = max(maxFreq, x.second);
37        }
38        
39
40        vector<int>ans;
41        for(auto &i:freq)
42        {
43            if(i.second==maxFreq)
44            {
45                ans.push_back(i.first);
46            }
47        }
48       
49        return ans;
50        
51    }
52};