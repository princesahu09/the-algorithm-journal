1class Trie {
2    class TrieNode {
3        TrieNode[] child;
4        int wordCount;
5
6        TrieNode() {
7            child = new TrieNode[26];
8            wordCount = 0;
9        }
10    }
11
12    TrieNode root;
13
14    public Trie() {
15        root = new TrieNode();
16    }
17
18    public void insert(String word) {
19        TrieNode cur = root;
20
21        for (char ch : word.toCharArray()) {
22            int idx = ch - 'a';
23            if (cur.child[idx] == null) {
24
25                cur.child[idx] = new TrieNode();
26            }
27            cur = cur.child[idx];
28        }
29
30        cur.wordCount++;
31
32    }
33
34    public boolean search(String word) {
35        TrieNode cur = root;
36
37        for (char ch : word.toCharArray()) {
38            int idx = ch - 'a';
39
40            if (cur.child[idx] == null) {
41                return false;
42            }
43            cur = cur.child[idx];
44        }
45        return cur.wordCount > 0;
46
47    }
48
49    public boolean startsWith(String prefix) {
50        TrieNode cur = root;
51
52        for (char ch : prefix.toCharArray()) {
53            int idx = ch - 'a';
54
55            if (cur.child[idx] == null) {
56                return false;
57            }
58
59            cur = cur.child[idx];
60        }
61        return true;
62
63    }
64}
65
66/**
67 * Your Trie object will be instantiated and called as such:
68 * Trie obj = new Trie();
69 * obj.insert(word);
70 * boolean param_2 = obj.search(word);
71 * boolean param_3 = obj.startsWith(prefix);
72 */