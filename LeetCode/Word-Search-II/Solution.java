1class Solution {
2
3    class TrieNode {
4        TrieNode[] child;
5        int wordCount;
6        String word;
7        char ch;
8
9        TrieNode(char ch) {
10            child = new TrieNode[26];
11            wordCount = 0;
12            this.ch = ch;
13            word = "";
14
15        }
16    }
17
18    void insert(String word, TrieNode root) {
19        TrieNode cur = root;
20
21        for (int i = 0; i < word.length(); i++) {
22            int idx = word.charAt(i) - 'a';
23
24            if (cur.child[idx] == null) {
25                cur.child[idx] = new TrieNode(word.charAt(i));
26
27            }
28            cur = cur.child[idx];
29        }
30        cur.word = word;
31        cur.wordCount++;
32    }
33
34    // boolean search(String word, TrieNode root) {
35
36    //     TrieNode cur = root;
37
38    //     for (int i = 0; i < word.length(); i++) {
39    //         int idx = word.charAt(i) - 'a';
40
41    //         if (cur.child[idx] == null) {
42    //             return false;
43    //         }
44
45    //         cur = cur.child[idx];
46    //     }
47
48    //     return cur.wordCount > 0;
49    // }
50
51    void solve(char[][] board, int i, int j, int row, int col, List<String> ans, TrieNode root) {
52
53        int index = board[i][j] - 'a';
54
55        if (board[i][j] == '$' || root.child[index] == null) {
56
57            return;
58
59        }
60
61        root = root.child[index];
62
63        if (root.wordCount > 0) {
64            ans.add(root.word);
65            root.wordCount -= 1;
66        }
67
68        char ch = board[i][j];
69        board[i][j] = '$';
70
71        if (i > 0) {
72            solve(board, i - 1, j, row, col, ans, root);
73        }
74
75        if (i < row - 1) {
76            solve(board, i + 1, j, row, col, ans, root);
77
78        }
79        if (j > 0) {
80            solve(board, i, j - 1, row, col, ans, root);
81
82        }
83        if (j < col - 1) {
84            solve(board, i, j + 1, row, col, ans, root);
85
86        }
87
88        board[i][j] = ch;
89    }
90
91    public List<String> findWords(char[][] board, String[] words) {
92
93        TrieNode root = new TrieNode('/');
94
95        int m = board.length;
96        int n = board[0].length;
97
98        for (int i = 0; i < words.length; i++) {
99            insert(words[i], root);
100
101        }
102
103        List<String> ans = new ArrayList<>();
104
105        for (int i = 0; i < m; i++) {
106            for (int j = 0; j < n; j++)
107
108            {
109                solve(board, i, j, m, n, ans, root);
110            }
111        }
112
113        return ans;
114
115    }
116}