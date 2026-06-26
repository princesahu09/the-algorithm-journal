1class WordDictionary {
2
3    class TrieNode {
4        TrieNode[] child;
5        int wordCount;
6
7        TrieNode() {
8            child = new TrieNode[26];
9            wordCount = 0;
10        }
11    }
12
13    TrieNode root;
14
15    public WordDictionary() {
16
17        root = new TrieNode();
18
19    }
20
21    public void addWord(String word) {
22
23        TrieNode cur = root;
24
25        for (char ch : word.toCharArray()) {
26            int idx = ch - 'a';
27
28            if (cur.child[idx] == null) {
29                cur.child[idx] = new TrieNode();
30            }
31            cur = cur.child[idx];
32        }
33        cur.wordCount++;
34
35    }
36
37    public boolean search(String word) {
38
39        return find(word, 0, root);
40
41    }
42
43    public boolean find(String word, int pos, TrieNode node) {
44        if (node == null) {
45            return false;
46        }
47
48        if (pos == word.length()) {
49            return node.wordCount > 0;
50        }
51
52        char ch = word.charAt(pos);
53
54        if (ch != '.') {
55            return find(word, pos + 1, node.child[ch - 'a']);
56        }
57
58        for (int i = 0; i < 26; i++) {
59
60            if (node.child[i] != null) {
61
62                if (find(word, pos + 1, node.child[i])) {
63                    return true;
64                }
65            }
66        }
67
68        return false;
69    }
70}
71
72/**
73 * Your WordDictionary object will be instantiated and called as such:
74 * WordDictionary obj = new WordDictionary();
75 * obj.addWord(word);
76 * boolean param_2 = obj.search(word);
77 */